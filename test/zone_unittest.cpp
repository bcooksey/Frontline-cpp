#include <gtest/gtest.h>
#include "zone.h"

class ZoneTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
            int zones[2] = { 2, 3 };
            z1 = Zone(NULL, zones, 1, LAND, USSR, USSR );
        }

        Zone z1;
};	

TEST_F(ZoneTest, Constructor) {
//    EXPECT_EQ( NULL, z1.getOccupyingUnits() );
//    int *gotNeighboringZones = z1.getNeighboringZones();

    EXPECT_EQ( 1, z1.getSupplyValue() );
//    int gotNeighboringZones[2] = {2, 3 };
//    EXPECT_EQ( 2, gotNeighboringZones[0] );
//    EXPECT_EQ( 3, gotNeighboringZones[1] );
//    EXPECT_EQ( 1, z1.getSupplyValue() );
//    EXPECT_EQ( LAND, z1.getZoneType() );
//    EXPECT_EQ( 1, z1.getSupplyValue() );
}
