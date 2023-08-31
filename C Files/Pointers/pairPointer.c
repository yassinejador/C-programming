#include <stdio.h>

int main()
{
    int n;
    int *p = &n;
    printf("Donne le nombre : ");
    scanf("%d", p);
    if (*p % 2 == 0)
        printf("Pair");
    else
        printf("Impair");
    return 0;
}