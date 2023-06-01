#include "pch.h"
#include "../Project1/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}




TEST(CalTest, GetGop) {
	Cal* cal = new Cal();

	EXPECT_EQ(cal->GetGop(5, 7), 35);
}