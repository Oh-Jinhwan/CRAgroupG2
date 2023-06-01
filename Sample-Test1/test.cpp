#include "pch.h"
#include "../Project1/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, getSum) {
	Cal* cal = new Cal();
	
	EXPECT_EQ(5, cal->getSum(2, 3));
}