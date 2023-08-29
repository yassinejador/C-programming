#include <stdio.h>

int main()
{
    /*
     &
     |
     ^ = xor
     <<
     >>
    */
    int x = 000110101;
    int y = 000101100;
    int z = 0;

    z = x & y;  // 000100100
    z = x | y;  // 000111101
    z = x ^ y;  // 000011001
    z = x << 1; // 000110010
    z = x >> 2; // 100001100
    return 0;
}