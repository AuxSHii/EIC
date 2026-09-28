
//lorretnz boosts on particels momentum , energy
# pragma once

#include <cmath>
#include <stdexcept>

#include "core/four_vector.hpp"


namespace eic::math
  {
  	class LorentzBoost
  	{
  	public:
  		explicit LorentzBoost(double beta_z) : beta_z_(beta_z) //beta
      {
        if (std::abs(beta_z_) >= 1.0)
        {
          throw std::invalid_argument("Lorentz boost requires |beta| < 1.");
        }

        gamma_ = 1.0 / std::sqrt(1.0 - beta_z_ * beta_z_);
      }

      FourVector apply(const FourVector& vector) const
      {
        const double energy = gamma_ * (vector.energy() - beta_z_ * vector.pz());

        const double pz = gamma_ * (vector.pz() - beta_z_ * vector.energy());

        return FourVector(
          energy,
          vector.px(),
          vector.py(),
          pz
          );
      }
    double beta() const
    {
      return beta_z_;
    }

    double gamma() const
    {
      return gamma_;
    }

  private: 
    double beta_z_;
    double gamma_;

  	};
  }