#include <cassert>
#include <cmath>

#include "core/vector3.hpp"
#include "core/four_vector.hpp"

#include "particles/particle_definition.hpp"
#include "particles/particle_state.hpp"

int main()
{
    using namespace eic::math;
    using namespace eic::particles;

    ParticleDefinition electron(
        11,
        "electron",
        0.00051099895,
        -1.0,
        0.0
    );

    FourVector momentum(10.0, 0.0, 0.0, 9.999999987);
    Vector3 position(0.0, 0.0, 0.0);

    ParticleState state(
        electron,
        momentum,
        position
    );

    assert(state.definition().pdg_id() == 11);
    assert(state.definition().name() == "electron");
    assert(state.definition().charge() == -1.0);

    assert(std::abs(state.momentum().energy() - 10.0) < 1e-12);
    assert(state.position().x() == 0.0);

    return 0;
}