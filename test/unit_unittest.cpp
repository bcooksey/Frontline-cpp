#include <gtest/gtest.h>
#include "unit.h"

class UnitTest : public testing::Test {
    protected:
	Unit u;

};	

TEST_F(UnitTest, FirstTest) {

    EXPECT_EQ( 1, u.move(3) );
}
