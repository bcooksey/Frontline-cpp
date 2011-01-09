#include <gtest/gtest.h>
#include "unit.h"

//class UnitTest : public testing::Test {
//    public: UnitTest () {};
//    protected:
//        virtual void SetUp() {
//            u1 = Unit(1, 1, 2, 3);
//        }

//        Unit u;

//    Unit u1;
//};	

TEST(UnitTest, Constructor) {
    Unit u(1, 2, 3, 4);
    EXPECT_EQ( 1, u.getMovementRange() );
    EXPECT_EQ( 2, u.getAttackRating() );
    EXPECT_EQ( 3, u.getDefenseRating() );
    EXPECT_EQ( 4, u.getIPCCost() );
}
