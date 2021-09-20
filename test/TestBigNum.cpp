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
    std::string first = "12345";
    std::string second = "123456";
    formatStr(first, second);
    ASSERT_EQ("012345", first);
    ASSERT_EQ("123456", second);

    first = "12345";
    second = "67890";
    formatStr(first, second);
    ASSERT_EQ("12345", first);
    ASSERT_EQ("67890", second);

    first = "12345111";
    second = "123456";
    formatStr(first, second);
    ASSERT_EQ("12345111", first);
    ASSERT_EQ("00123456", second);
}

TEST(addStr, first_second)
{
    std::string first = "1";
    std::string second = "999";
    ASSERT_EQ("1000", addStr(first, second));

    first = "123456789";
    second = "987654321";
    ASSERT_EQ("1111111110", addStr(first, second));

    first = "7777777";
    second = "333";
    ASSERT_EQ("7778110", addStr(first, second));
}

