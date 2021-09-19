#include "gtest/gtest.h"
#include "BigNum.h"

TEST(addChar, first_second_inc)
{
    int inc = 0;
    ASSERT_EQ('8', addChar('1', '7', inc));
    ASSERT_EQ(0, inc);
    ASSERT_EQ('2', addChar('5', '7', inc));
    ASSERT_EQ(1, inc);
}

TEST(formatStr, first_second)
{
    std::string first = "first";
    std::string second = "second";
    formatStr(first, second);
    ASSERT_EQ("0first", first);
    ASSERT_EQ("second", second);

    first = "first";
    second = "econd";
    formatStr(first, second);
    ASSERT_EQ("first", first);
    ASSERT_EQ("econd", second);

    first = "first111";
    second = "second";
    formatStr(first, second);
    ASSERT_EQ("first111", first);
    ASSERT_EQ("00second", second);
}
