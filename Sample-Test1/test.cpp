#include "pch.h"
#include "../Project1/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, GetSumSumTest)
{
	Cal* cal = new Cal();
	EXPECT_EQ(cal->getSumSum(1, 2, 3), 6);
	delete cal;
}