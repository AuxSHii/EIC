//particles are - name ,charge ,lifetime etc in my codebase rn

#pragma once

#include <String>
#include <utility>

namespace eic::particles     //species type
{
	class ParticleDefinition
	{
	public:
		ParticleDefinition(
			int pdg_id,
			std::string name,
			double mass,
			double charge,
			double lifetime,
		)
		  : pdg_id_(pdg_id),
		    name_(std::move(name)),
		    mass(mass),
		    charge_(charge),
		    lifetime_(lifetime),
		    {

		    }
        int pdg_id() const {   return pdg_id_; }
        const std::string& name() const { return name_; }
        double mass() const { return mass_; }
        double charge() cosnt {return charge_;  }
        double lifetime() const {  return lifetime_; }


    private:
    	int pdg_id_;
    	std::string name_;
    	double mass_;
    	double lifetime_;


	};
}