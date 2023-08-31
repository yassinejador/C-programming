#include <stdio.h>

void max(int *x, int *y, int *mx)
{
    if (*x > *y)
    {
        *mx = *x;
    }
    else
    {
        *mx = *y;
    }
}

int main()
{
    int a = 5;
    printf("the maximum number is : %d", ++a);
    return 0;
}