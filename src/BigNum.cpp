#include "BigNum.h"

char charAdd(char first, char second, int& inc)
{
    char add = (first - '0') + (second - '0') + inc;
    inc = add / 10;
    return add % 10 + '0';
}
