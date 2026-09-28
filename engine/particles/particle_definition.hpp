//particles are - name ,charge ,lifetime etc in my codebase rn

#pragma once

#include <string>
#include <utility>

namespace eic::particles
{
    class ParticleDefinition         //species
    {
    public:
        ParticleDefinition(
            int pdg_id,
            std::string name,
            double mass,
            double charge,
            double lifetime
        )
            : pdg_id_(pdg_id),
              name_(std::move(name)),
              mass_(mass),
              charge_(charge),
              lifetime_(lifetime)
        {
        }

        int pdg_id() const
        {
            return pdg_id_;
        }

        const std::string& name() const
        {
            return name_;
        }

        double mass() const
        {
            return mass_;
        }

        double charge() const
        {
            return charge_;
        }

        double lifetime() const
        {
            return lifetime_;
        }

    private:
        int pdg_id_;
        std::string name_;
        double mass_;
        double charge_;
        double lifetime_;
    };
}