#include <stdio.h>
#include <string.h>
#include <ctype.h>

void message(char[], int);
int numberTosqrt(int);
int max(int, int);

int main()
{
    message("Yassine", 20);
    printf("\n%d", numberTosqrt(4));
    printf("\nthe maximum number is %d", max(4, 5));
    return 0;
}

void message(char name[], int age)
{
    printf("Hello %s\nyou have %d years old", name, age);
}

int numberTosqrt(int num)
{
    return num * num;
}
int max(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}
