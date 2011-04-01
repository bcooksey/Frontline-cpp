#ifndef ZONE_H
#define ZONE_H

#include "unit.h"
#include "globals.h"
#include <vector>
using namespace std;

class Zone {
    protected:
        int supplyValue;
        zoneType type;
        power nativePower;
        power controllingPower; 
        vector<Unit> occupyingUnits;
        int* neighboringZones;


    // Constructors
    // The empty constructor is to get the test fixture running
    // Trying to pass parameters to the declaration gave compile-time errors
    public: Zone(); 
    public: Zone(vector<Unit>, int*, int, zoneType, power, power);

    // Public Interface
    public:
        // Getters
        int getSupplyValue();
        vector<Unit> getOccupyingUnits();
        int* getNeighboringZones();
        zoneType getZoneType();
        power getNativePower();
        power getControllingPower();

    public:
        int addOccupyingUnit( Unit );
        int addOccupyingUnits( vector<Unit> );
        int setOccupyingUnits( vector<Unit> );
};

#endif
