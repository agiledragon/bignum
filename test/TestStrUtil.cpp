#include "gtest/gtest.h"
#include "StrUtil.h"


TEST(addChar, inc0)
{
    int inc = 0;
    ASSERT_EQ('2', addChar('5', '7', inc));
    ASSERT_EQ(1, inc);
}

TEST(addChar, inc1)
{
    int inc = 1;
    ASSERT_EQ('3', addChar('5', '7', inc));
    ASSERT_EQ(1, inc);
}

TEST(formatStr, both_ok)
{
    std::string first = "12345";
    std::string second = "67890";
    formatStr(first, second);
    ASSERT_EQ("12345", first);
    ASSERT_EQ("67890", second);
}

TEST(formatStr, first_ok)
{
    std::string first = "12345";
    std::string second = "6789";
    formatStr(first, second);
    ASSERT_EQ("12345", first);
    ASSERT_EQ("06789", second);
}

TEST(formatStr, second_ok)
{
    std::string first = "1234";
    std::string second = "67890";
    formatStr(first, second);
    ASSERT_EQ("01234", first);
    ASSERT_EQ("67890", second);
}

TEST(addStr, inc0)
{
    std::string first = "123456789";
    std::string second = "234";
    ASSERT_EQ("123457023", addStr(first, second));
}

TEST(addStr, inc1)
{
    std::string first = "999999999";
    std::string second = "1";
    ASSERT_EQ("1000000000", addStr(first, second));
}

TEST(multChar, first_second_inc)
{
    int inc = 4;
    ASSERT_EQ('2', multChar('6', '8', inc));
    ASSERT_EQ(5, inc);
}

TEST(multStrAndChar, inc0)
{
    ASSERT_EQ("999999", multStrAndChar("111111", '9'));
}

TEST(multStrAndChar, inc1)
{
    ASSERT_EQ("4999999995", multStrAndChar("555555555", '9'));
}
