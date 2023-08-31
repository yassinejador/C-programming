#include <stdio.h>

int main()
{
    int t[5];
    int *p;
    for (p = t; p < t + 5; p++)
    {
        printf("donne une nombre t[%d] : ", p - t);
        scanf("%d", p);
    }
    for (p = t; p < t + 5; p++)
    {
        printf("t[%d] = %d\n", p - t, t[p - t]);
    }

    return 0;
}