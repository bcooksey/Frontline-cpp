#include <gtest/gtest.h>
#include "zone.h"

class ZoneTest : public ::testing::Test {
    protected:
        virtual void SetUp() {

            int *neighboringZones = new int [2];
            neighboringZones[0] = 2;
            neighboringZones[1] = 3;

            z1 = Zone(NULL, neighboringZones, 1, LAND, USSR, GERMANY );
        }

        Zone z1;
};	

TEST_F(ZoneTest, Constructor) {

    // See that the arguments given in the constructor correctly set on the object
    EXPECT_EQ( NULL, z1.getOccupyingUnits() );
    int *gotNeighboringZones = z1.getNeighboringZones();
    EXPECT_EQ( 2, gotNeighboringZones[0] );
    EXPECT_EQ( 3, gotNeighboringZones[1] );
    EXPECT_EQ( 1, z1.getSupplyValue() );
    EXPECT_EQ( LAND, z1.getZoneType() );
    EXPECT_EQ( USSR, z1.getNativePower() );
    EXPECT_EQ( GERMANY, z1.getControllingPower() );
}

TEST_F(ZoneTest, UnitSetting) {
    Unit u1(1, 1, 1, 1);
    Unit u2(2, 2, 2, 2); 
    
    // Sanity check
    EXPECT_EQ( NULL, z1.getOccupyingUnits() );

    z1.addOccupyingUnits( &u1 );
    Unit* gotUnits = z1.getOccupyingUnits();
    // To make this work, I have to define the == operator on the unit class
//    EXPECT_EQ( &u1, gotUnits[0]); 
}
