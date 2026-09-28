#pragma once      //only include once

namespace eic::units
{
    constexpr double meter = 1.0;
    constexpr double centimeter = 1e-2;
    constexpr double millimeter = 1e-3;

    constexpr double second = 1.0;
    constexpr double nanosecond = 1e-9;

    constexpr double electronvolt = 1.0;
    constexpr double kiloelectronvolt = 1e3;
    constexpr double megaelectronvolt = 1e6;
    constexpr double gigaelectronvolt = 1e9;

    constexpr double barn = 1e-28;
    constexpr double millibarn = 1e-3 * barn;
    constexpr double microbarn = 1e-6 * barn;
    constexpr double nanobarn = 1e-9 * barn;
    constexpr double picobarn = 1e-12 * barn;
}