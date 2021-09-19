#include "BigNum.h"

char charAdd(char first, char second, int& inc)
{
    char add = (first - '0') + (second - '0') + inc;
    inc = add / 10;
    return add % 10 + '0';
}

void formatStr(std::string& first, std::string& second)
{
    size_t firstLen = first.length();
    size_t secondLen = second.length();

    if (firstLen < secondLen)
    {
       first.insert(first.begin(), secondLen - firstLen, '0');
    }
    else if (firstLen > secondLen)
    {
        second.insert(second.begin(), firstLen - secondLen, '0');
    }
}
