#include "zone.h"

// Constructor
Zone::Zone() {}
Zone::Zone(Unit *occupyingUnits, int neighboringZones[], int supplyValue, zoneType type, power nativePower, power controllingPower) {
    this->supplyValue = supplyValue;
//    this->movementRange = movementRange;
//    this->attackRating  = attackRating;
//    this->defenseRating = defenseRating;
}

// Getters
int Zone::getSupplyValue() { return supplyValue; }
