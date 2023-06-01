#include "pch.h"
#include "../Project1/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, TestName_MINUS1) {
	Cal* cal = new Cal();
	EXPECT_EQ(4,cal->getMinus(10,6));
}

TEST(TestCaseName, TestName_MINUS21) {
	Cal* cal = new Cal();
	EXPECT_EQ(-3, cal->getMinus(2, 5));
}
