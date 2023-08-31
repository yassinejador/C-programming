#include <stdio.h>

int main()
{
    int t[10];
    int n;
    int x = 0;
    int *p1 = t;
    int *p2 = t;
    printf("donner la taille de tableau : ");
    scanf("%d", &n);

    printf("donner la valeur de X : ");
    scanf("%d", &x);

    for (p1 = t; p1 < n + t; p1++)
    {
        printf("t[%d] = ", p1 - t);
        scanf("%d", p1);
    }

    for (p1 = t; p1 < n + t; p1++)
    {
        *p2 = *p1;
        if (*p2 != x)
        {
            p2++;
        }
    }
    printf("\n");
    n = p2 - t;
    for (p1 = t; p1 < n + t; p1++)
    {
        printf("t[%d] = %d\n", p1 - t, *p1);
    }

    return 0;
}