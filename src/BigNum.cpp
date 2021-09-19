#include "BigNum.h"

char addChar(char first, char second, int& inc)
{
    int add = (first - '0') + (second - '0') + inc;
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


std::string addStr(std::string first, std::string second)
{
    formatStr(first, second);

    int inc = 0;
    std::string s;
    for (int i = first.length() - 1; i >= 0; i--)
    {
        char c = addChar(first[i], second[i], inc);
        s.insert(s.begin(), c);
    }

    if (inc == 1)
    {
        s.insert(s.begin(), '1');
    }
    return s;
}
