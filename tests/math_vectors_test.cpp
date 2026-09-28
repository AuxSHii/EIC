#include <cassert>
#include <cmath>

#include "core/vector3.hpp"
#include "core/four_vector.hpp"

int main()
{
    using namespace eic::math;

    Vector3 a(1.0, 2.0, 3.0);
    Vector3 b(2.0, 3.0, 4.0);

    Vector3 sum = a + b;

    assert(sum.x() == 3.0);
    assert(sum.y() == 5.0);
    assert(sum.z() == 7.0);

    assert(a.dot(b) == 20.0);
    assert(std::abs(a.magnitude() - std::sqrt(14.0)) < 1e-12);

    FourVector p(5.0, 3.0, 0.0, 0.0);

    assert(std::abs(p.invariant_mass_squared() - 16.0) < 1e-12);

    return 0;
}