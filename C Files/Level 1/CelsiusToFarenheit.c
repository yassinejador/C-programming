#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;
    float result;

    printf("Celsius to farenheit type C.\nfarenheit to celcius type F. : ");
    scanf("%c", &unit);

    printf("Give Temperature : ");
    scanf("%f", &temp);
    unit = toupper(unit);
    if (unit == 'C')
    {
        result = (temp * 9 / 5) + 32;
        printf("Farenheit => %0.3f", result);
    }
    else if (unit == 'F')
    {
        result = ((temp - 32) * 5) / 9;
        printf("Celsius => %0.3f", result);
    }
    else
    {
        printf("Is not a valid unit!");
    }

    return 0;
}