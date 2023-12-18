#include <gtest/gtest.h>
#include "square.h"

//int main() { return 0;}

TEST(square, square0)
{
    EXPECT_EQ(square(0), 0);
}

TEST(square, square12)
{
    EXPECT_EQ(square(12), 144);
}
