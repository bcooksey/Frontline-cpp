#include "zone.h"

// Constructor
Zone::Zone() {}
Zone::Zone(Unit *occupyingUnits, int *neighboringZones, int supplyValue, zoneType type, power nativePower, power controllingPower) {
    this->occupyingUnits = occupyingUnits;
    this->neighboringZones = neighboringZones;
    this->supplyValue = supplyValue;
    this->type = type;
    this->nativePower = nativePower;
    this->controllingPower = controllingPower;
}

// Getters
int Zone::getSupplyValue() { return supplyValue; }
Unit* Zone::getOccupyingUnits() { return occupyingUnits; }
int* Zone::getNeighboringZones() { return neighboringZones; }
zoneType Zone::getZoneType() { return type; }
power Zone::getNativePower() { return nativePower; }
power Zone::getControllingPower() { return controllingPower; }
