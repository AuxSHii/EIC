#include <cassert>

#include "core/constants/constants.hpp"
#include "core/units/units.hpp"

int main()
{
    using namespace eic;

    assert(units::centimeter == 1e-2);
    assert(units::gigaelectronvolt == 1e9);

    assert(constants::speed_of_light > 2.99e8);
    assert(constants::electron_mass > 0.0005);
    assert(constants::proton_mass > 0.9);

    return 0;
}