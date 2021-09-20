#include "BigNum.h"
#include "StrUtil.h"


std::string multBigNum(std::string first, std::string second)
{
    std::string result = "0";

    for (int i = second.length() - 1; i >= 0; i--)
    {
        std::string s = multStrAndChar(first, second[i]);
        s = s.insert(s.length() - 1, second.length() - 1 - i, '0');
        result = addStr(result, s);
    }
    return result;
}

