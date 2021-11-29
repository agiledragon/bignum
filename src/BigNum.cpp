#include "BigNum.h"
#include "StrUtil.h"
#include <iostream>

namespace {
    bool checkNum(const std::string& s)
    {
        for (char c : s)
        {
            c = c - '0';
            if (c > 9 || c < 0)  return false;
        }
        return true;
    }
}


std::string multBigNum(const std::string& first, const std::string& second)
{
    std::string result = "0";

    bool b = checkNum(first);
    if (!b) return INVALID_NUM;

    b = checkNum(second);
    if (!b) return INVALID_NUM;

    for (int i = second.length() - 1; i >= 0; i--)
    {
        std::string s = multStrAndChar(first, second[i]);
        s = s.insert(s.length() - 1, second.length() - 1 - i, '0');
        result = addStr(result, s);
    }
    return result;
}

