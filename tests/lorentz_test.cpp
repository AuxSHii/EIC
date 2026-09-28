#include <cassert>
#include <cmath>

#include "core/four_vector.hpp"
#include "core/lorentz.hpp"

int main()
{
    using namespace eic::math;

    constexpr double beta = 0.6;

    LorentzBoost boost(beta);

    assert(std::abs(boost.beta() - 0.6) < 1e-12);
    assert(std::abs(boost.gamma() - 1.25) < 1e-12);

    FourVector p(10.0, 3.0, 4.0, 6.0);

    const double original_mass_squared =
        p.invariant_mass_squared();

    FourVector boosted = boost.apply(p);

    const double boosted_mass_squared =
        boosted.invariant_mass_squared();

    // lorentz transformations must preserve the invariant mass.
    assert(
        std::abs(
            boosted_mass_squared - original_mass_squared
        ) < 1e-10
    );

    // Transverse momentum is unchanged for a z-boost.
    assert(std::abs(boosted.px() - p.px()) < 1e-12);
    assert(std::abs(boosted.py() - p.py()) < 1e-12);

    return 0;
}