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
    z1.addOccupyingUnit( u1 );
    vector<Unit> gotUnits = z1.getOccupyingUnits();
    EXPECT_EQ( true, u1 == gotUnits.front() );

    // Add another unit
    z1.addOccupyingUnit( u2 );
    gotUnits = z1.getOccupyingUnits();
    EXPECT_EQ( (unsigned)2, gotUnits.size() ); 

    // Setting units should override any existing units
    vector<Unit> newOccupyingUnits;
    newOccupyingUnits.push_back( u2 );
    z1.setOccupyingUnits( newOccupyingUnits );
    gotUnits = z1.getOccupyingUnits();
    EXPECT_EQ( (unsigned)1, gotUnits.size() ); 
    EXPECT_EQ( true, u2 == gotUnits.front() );

    // Should be able to add multiple units
    newOccupyingUnits.push_back( u1 );
    z1.addOccupyingUnits( newOccupyingUnits );
    gotUnits = z1.getOccupyingUnits();
    EXPECT_EQ( (unsigned)3, gotUnits.size() );
    EXPECT_EQ( true, u2 == gotUnits.begin()[0] );
    EXPECT_EQ( true, u2 == gotUnits.begin()[1] );
    EXPECT_EQ( true, u1 == gotUnits.begin()[2] );
}
