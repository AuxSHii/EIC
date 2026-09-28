#pragma once

#include "core/vector3.hpp"

namespace eic::math
{
    class FourVector
    {
    public:
        constexpr FourVector() = default;

        constexpr FourVector(double energy, const Vector3& momentum)
            : energy_(energy), momentum_(momentum)
        {
        }

        constexpr FourVector(
            double energy,
            double px,
            double py,
            double pz
        )
            : energy_(energy),
              momentum_(px, py, pz)
        {
        }

        constexpr double energy() const
        {
            return energy_;
        }

        constexpr const Vector3& momentum() const
        {
            return momentum_;
        }

        constexpr double px() const { return momentum_.x(); }
        constexpr double py() const { return momentum_.y(); }
        constexpr double pz() const { return momentum_.z(); }

        constexpr double invariant_mass_squared() const
        {
            return energy_ * energy_
                 - momentum_.squared_magnitude();
        }

        constexpr FourVector operator+(const FourVector& other) const
        {
            return FourVector(
                energy_ + other.energy_,
                momentum_ + other.momentum_
            );
        }

        constexpr FourVector operator-(const FourVector& other) const
        {
            return FourVector(
                energy_ - other.energy_,
                momentum_ - other.momentum_
            );
        }

    private:
        double energy_ = 0.0;
        Vector3 momentum_;
    };
}