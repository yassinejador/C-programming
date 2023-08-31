#include <stdio.h>

int main()
{
    int t[5];
    int *p;
    int somme = 0;
    for (p = t; p < t + 5; p++)
    {
        printf("%d - give number : ", p - t);
        scanf("%d", p);
    }
    for (p = t; p < t + 5; p++)
    {
        somme += *p;
    }

    printf("la Somme est : %d", somme);
    return 0;
}