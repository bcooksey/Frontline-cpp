#ifndef ZONE_H
#define ZONE_H

#include "unit.h"

enum zoneType { LAND, SEA, IMPASSIBLE };
enum power { GERMANY, JAPAN, USSR, BRITIAN, US };

class Zone {
    protected:
        int supplyValue;
        zoneType type;
        power nativePower;
        power controllingPower; 
        Unit *occupyingUnits;
        int neighboringZones[];


    // Constructors
    // The empty constructor is to get the test fixture running
    // Trying to pass parameters to the declaration gave compile-time errors
    public: Zone(); 
    public: Zone(Unit*, int[], int, zoneType, power, power);
//    public: Zone(int, int, int, zoneType, power, power);

    // Public Interface
    public:
        // Getters
        int getSupplyValue();
//        int getOccupyingUnits();
        int* getNeighboringZones();

//        int addUnit();
//        int removeUnit();
};

#endif
