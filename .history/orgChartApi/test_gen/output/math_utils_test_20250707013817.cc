#include "gtest/gtest.h"
#include "math_utils.h"

TEST(MathUtils, Addition) {
    EXPECT_EQ(5, add(2, 3));
}

TEST(MathUtils, Multiplication) {
    EXPECT_EQ(6, multiply(2, 3));
}
