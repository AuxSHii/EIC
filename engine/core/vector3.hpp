#pragma once

#include <cmath>

namespace eic::math
{
    class Vector3
    {
    public:
        constexpr Vector3() = default;

        constexpr Vector3(double x, double y, double z)
            : x_(x), y_(y), z_(z)
        {
        }

        constexpr double x() const { return x_; }
        constexpr double y() const { return y_; }
        constexpr double z() const { return z_; }

        constexpr Vector3 operator+(const Vector3& other) const
        {
            return Vector3(
                x_ + other.x_,
                y_ + other.y_,
                z_ + other.z_
            );
        }

        constexpr Vector3 operator-(const Vector3& other) const
        {
            return Vector3(
                x_ - other.x_,
                y_ - other.y_,
                z_ - other.z_
            );
        }

        constexpr Vector3 operator*(double scalar) const
        {
            return Vector3(
                x_ * scalar,
                y_ * scalar,
                z_ * scalar
            );
        }

        constexpr double dot(const Vector3& other) const
        {
            return x_ * other.x_
                 + y_ * other.y_
                 + z_ * other.z_;
        }

        constexpr double squared_magnitude() const
        {
            return dot(*this);
        }

        double magnitude() const
        {
            return std::sqrt(squared_magnitude());
        }

    private:
        double x_ = 0.0;
        double y_ = 0.0;
        double z_ = 0.0;
    };
}