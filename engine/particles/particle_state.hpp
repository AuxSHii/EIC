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
			const ParticelDefinition& defintion,     //def
			const eic::math::FourVector& momentum,   //momentium
			cosnt eic::math::Vector3& position)    //posn

            : defintion_(defintion),
              momentum_(momentum),
              position_(position)
              {

              }
    
        const ParticelDefinition& defintion() const { return defintion_; }
        const eic::math::FourVector& momentum() const { return momentum_; }
        const eic::math::Vector3& position() const { return position_; }

    private:
    	const ParticelDefinition& defintion_;
    	eic::math::FourVector momentum_;
    	eic::maths::Vector3 position_;
 
	};
}