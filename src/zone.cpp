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

int Zone::addOccupyingUnit( Unit newUnit ) {
    occupyingUnits.push_back( newUnit );
    return 1;
}

int Zone::addOccupyingUnits( vector<Unit> newUnits ) {
    unsigned i = 0;
    while( i < newUnits.size() ) {
        occupyingUnits.push_back( newUnits.begin()[i++] );
    }
    return 1;
}

int Zone::setOccupyingUnits( vector<Unit> newOccupyingUnits ) {
    occupyingUnits = newOccupyingUnits;
    return 1;
}
