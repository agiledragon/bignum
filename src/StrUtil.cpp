#include "StrUtil.h"


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


std::string addStr(const std::string& first, const std::string& second)
{
    std::string firstTemp = first;
    std::string secondTemp = second;
    formatStr(firstTemp, secondTemp);

    int inc = 0;
    std::string s;
    for (int i = firstTemp.length() - 1; i >= 0; i--)
    {
        char c = addChar(firstTemp[i], secondTemp[i], inc);
        s.insert(s.begin(), c);
    }

    if (inc == 1)
    {
        s.insert(s.begin(), '1');
    }
    return s;
}

char multChar(char first, char second, int& inc)
{
    int mult = (first - '0') * (second - '0') + inc;
    inc = mult / 10;
    return mult % 10 + '0';
}

std::string multStrAndChar(const std::string& first, char second)
{
    std::string s;
    int inc = 0;
    for (int i = first.length() - 1; i >= 0; i--)
    {
        char c = multChar(first[i], second, inc);
        s.insert(s.begin(), c);
    }

    if (inc != 0)
    {
        s.insert(s.begin(), inc + '0');
    }
    return s;
}
