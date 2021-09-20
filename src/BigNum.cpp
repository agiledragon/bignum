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

char multChar(char first, char second, int& inc)
{
    int mult = (first - '0') * (second - '0') + inc;
    inc = mult / 10;
    return mult % 10 + '0';
}

std::string multStrAndChar(std::string first, char second)
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

std::string toStr(long long num)
{
    return std::to_string(num);
}
