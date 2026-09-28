//particle in an event file


#pragma once

#include "core/four_vector.hpp"
#include "core/vector3.hpp"
#include "particles/particle_definition.hpp"

namespace eic::particles
{
	class ParticleState
	{
	public:
		ParticleState(
			const ParticleDefinition& definition,     //def
			const eic::math::FourVector& momentum,   //momentium
			const eic::math::Vector3& position)    //posn

            : definition_(definition),
              momentum_(momentum),
              position_(position)
              {

              }
    
        const ParticleDefinition& definition() const { return definition_; }
        const eic::math::FourVector& momentum() const { return momentum_; }
        const eic::math::Vector3& position() const { return position_; }

    private:
    	const ParticleDefinition& definition_;
    	eic::math::FourVector momentum_;
    	eic::math::Vector3 position_;
 
	};
}