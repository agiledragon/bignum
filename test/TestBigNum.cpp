#include "gtest/gtest.h"
#include "BigNum.h"

TEST(charAdd, first_second_inc)
{
    int c = 0;
    ASSERT_EQ('8', charAdd('1', '7', c));
    ASSERT_EQ(0, c);
    ASSERT_EQ('2', charAdd('5', '7', c));
    ASSERT_EQ(1, c);
}
