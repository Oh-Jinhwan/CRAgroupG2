#include "pch.h"
#include "../Project1/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}


TEST(TestCaseName, GetGopTest) {
	Cal* cal = new Cal();

	EXPECT_EQ(cal->GetGop(5, 7), 35);
}

TEST(TestCaseName, GetSumSumTest)
{
	EXPECT_EQ(6, Cal().getSumSum(1, 2, 3));
}

TEST(TestCaseName, TestName_MINUS1) {
	Cal* cal = new Cal();
	EXPECT_EQ(4,cal->getMinus(10,6));
}

TEST(TestCaseName, TestName_MINUS21) {
	Cal* cal = new Cal();
	EXPECT_EQ(-3, cal->getMinus(2, 5));
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
