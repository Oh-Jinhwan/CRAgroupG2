#include "pch.h"
#include "../Project1/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, ZegopTest) {
	EXPECT_EQ(4, Cal().getZegop(2));
}

TEST(TestCaseName, DivideTest) {
	EXPECT_EQ(2, Cal().getDivide(4, 2));
}

TEST(TestCaseName, DivideByZeroTest) {
	EXPECT_EQ(0, Cal().getDivide(4, 0));
}