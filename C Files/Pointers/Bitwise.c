#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// Program Convert from hexadecimal (Just Numbers, alphabets I'll do that next time)
/*
    0000 in binary corresponds to 0 in hexahexadecimal.
    0001 in binary corresponds to 1 in hexahexadecimal.
    0010 in binary corresponds to 2 in hexahexadecimal.
    0011 in binary corresponds to 3 in hexahexadecimal.
    0100 in binary corresponds to 4 in hexahexadecimal.
    0101 in binary corresponds to 5 in hexahexadecimal.
    0110 in binary corresponds to 6 in hexahexadecimal.
    0111 in binary corresponds to 7 in hexahexadecimal.
    1000 in binary corresponds to 8 in hexahexadecimal.
    1001 in binary corresponds to 9 in hexahexadecimal.
    1010 in binary corresponds to A in hexahexadecimal.
    1011 in binary corresponds to B in hexahexadecimal.
    1100 in binary corresponds to C in hexahexadecimal.
    1101 in binary corresponds to D in hexahexadecimal.
    1110 in binary corresponds to E in hexahexadecimal.
    1111 in binary corresponds to F in hexahexadecimal.
*/
int binaryToDecimal(char binary[])
{
    int len = strlen(binary);
    int i = len - 1;
    int decimal = 0;
    while (i >= 0)
    {
        decimal += (int)pow(2, (len - 1 - i)) * (binary[i] - '0');
        i--;
    }
    return decimal;
}
int main()
{
    char hexadecimal[200];
    int num;
    int i;
    int zeros = 0;
    int res = 0;
    printf("Give hexadecimal to convert it to decimal : 0x");
    scanf("%s", &hexadecimal);
    i = strlen(hexadecimal) - 1;
    char binary[atoi(hexadecimal)];
    binary[0] = '\0';
    while (i >= 0)
    {
        res = hexadecimal[i] - '0';
        zeros = 0;
        while (res > 0)
        {
            if (res % 2 == 0)
            {
                strcat(binary, "0");
            }
            else
            {
                strcat(binary, "1");
            }
            res /= 2;
            zeros++;
        }
        i--;
        zeros = 4 - zeros;
        while (zeros > 0)
        {
            strcat(binary, "0");
            zeros--;
        }
    }
    strrev(binary);
    printf("Hexadecimal :0x%s\nBinary :0b%s\nDecimal :%d", hexadecimal, binary, binaryToDecimal(binary));
    return 0;
}