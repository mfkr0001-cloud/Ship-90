#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

// Ship 90 project scaffold for Android / GD 2.2081.
// Important: this first scaffold deliberately leaves physics unchanged.
// The exact PlayerObject physics fields and update hook must be validated
// against the selected Geode SDK bindings before altering live movement.

$on_mod(Loaded) {
    log::info("Ship 90 loaded. Experimental physics hook is not enabled yet.");
}
