#include "zone.h"

// Constructor
Zone::Zone() {}
Zone::Zone(vector<Unit> occupyingUnits, int *neighboringZones, int supplyValue, zoneType type, power nativePower, power controllingPower) {
    this->occupyingUnits = occupyingUnits;
    this->neighboringZones = neighboringZones;
    this->supplyValue = supplyValue;
    this->type = type;
    this->nativePower = nativePower;
    this->controllingPower = controllingPower;
}

// Getters
int Zone::getSupplyValue() { return supplyValue; }
vector<Unit> Zone::getOccupyingUnits() { return occupyingUnits; }
int* Zone::getNeighboringZones() { return neighboringZones; }
zoneType Zone::getZoneType() { return type; }
power Zone::getNativePower() { return nativePower; }
power Zone::getControllingPower() { return controllingPower; }

int Zone::addOccupyingUnits( Unit *newUnits ) {

    occupyingUnits.push_back( newUnits[0] );
    return 1;
}

int Zone::setOccupyingUnits( Unit *newUnits ) {

    // Declare a new vector because the old one may way too large
    vector<Unit> newOccupyingUnits;
    newOccupyingUnits.push_back( newUnits[0] );

    this->occupyingUnits = newOccupyingUnits;
    return 1;
}
