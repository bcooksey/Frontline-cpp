#include <gtest/gtest.h>
#include "zone.h"

class ZoneTest : public ::testing::Test {
    protected:
        virtual void SetUp() {

            int *neighboringZones = new int [2];
            neighboringZones[0] = 2;
            neighboringZones[1] = 3;
            vector<Unit> empty;
            z1 = Zone(empty, neighboringZones, 1, LAND, USSR, GERMANY );
        }

        Zone z1;
};	

TEST_F(ZoneTest, Constructor) {

    // See that the arguments given in the constructor correctly set on the object
    EXPECT_EQ( true, z1.getOccupyingUnits().empty() );
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

    // Add an initial unit
    z1.addOccupyingUnits( &u1 );
    vector<Unit> gotUnits = z1.getOccupyingUnits();
    EXPECT_EQ( true, u1 == gotUnits.front() );

    // Add another
    z1.addOccupyingUnits( &u2 );
    gotUnits = z1.getOccupyingUnits();
    EXPECT_EQ( (unsigned)2, gotUnits.size() ); 

    // Setting should override any existing units
    z1.setOccupyingUnits( &u2 );
    gotUnits = z1.getOccupyingUnits();
    EXPECT_EQ( (unsigned)1, gotUnits.size() ); 
    EXPECT_EQ( true, u2 == gotUnits.front() );
}
