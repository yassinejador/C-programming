#include <stdio.h>

int main()
{
    int n;
    int *p = &n;
    do
    {
        printf("Veillez saisi un nombre : ");
        scanf("%d", p);
    } while (*p <= 0);

    for (int i = 1; i <= *p; i++)
    {
        if (*p % i == 0)
            printf("Nombre il divise par %d \n", i);
    }
    return 0;
}