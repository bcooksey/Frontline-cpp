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

TEST(Unit, Constructor) {
    Unit u(1, 2, 3, 4);
    EXPECT_EQ( 1, u.getMovementRange() );
    EXPECT_EQ( 2, u.getAttackRating() );
    EXPECT_EQ( 3, u.getDefenseRating() );
    EXPECT_EQ( 4, u.getSupplyCost() );
}

TEST(Unit, Combat) {
    int attackRating = 3;
    int defenseRating = 4; 
    Unit u(1, attackRating, defenseRating, 1); 

    EXPECT_EQ( 0, u.attack(attackRating - 1) );
    EXPECT_EQ( 1, u.attack(attackRating) );
    EXPECT_EQ( 1, u.attack(attackRating + 1) );

    EXPECT_EQ( 0, u.defend(defenseRating - 1) );
    EXPECT_EQ( 1, u.defend(defenseRating) );
    EXPECT_EQ( 1, u.defend(defenseRating + 1) );
}

TEST(Unit, ComparisonOperator) {
    Unit uOrig(1, 2, 3, 4);
    Unit uDifferent(1, 2, 3, 3);
    Unit uSame(1, 2, 3, 4);

    EXPECT_EQ( 0, uOrig == uDifferent );
    EXPECT_EQ( 1, uOrig == uSame ); 
}
