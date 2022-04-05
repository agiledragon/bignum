#include "gtest/gtest.h"
#include "BigNum.h"

TEST(multBigNum, invalid_bignum)
{
    std::string first = "12345678910111213141516171819a0";
    std::string second = "2019181716151413121110987654321";
    ASSERT_EQ(INVALID_NUM, multBigNum(first, second));
}

TEST(multBigNum, valid_bignum)
{
    std::string first = "1234567891011121314151617181920";
    std::string second = "2019181716151413121110987654321";
    std::string result = "2492816912877266687794240983772975935013386905490061131076320";
    ASSERT_EQ(result, multBigNum(first, second));
}
