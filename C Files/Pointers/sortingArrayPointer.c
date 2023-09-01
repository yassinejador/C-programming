#include <stdio.h>

int main()
{
    int t[50];
    int n;
    int *p1, *p2;
    int temp;
    printf("Donne la taille de tableau : ");
    scanf("%d", &n);
    for (p1 = t; p1 < t + n; p1++)
    {
        printf("t[%d] : ", p1 - t);
        scanf("%d", p1);
    }

    for (p1 = t; p1 < t + n; p1++)
    {
        for (p2 = t; p2 < (t + n - 1) - (p1 - t); p2++)
        {
            if (*p2 > *(p2 + 1))
            {
                temp = *p2;
                *p2 = *(p2 + 1);
                *(p2 + 1) = temp;
            }
        }
    }

    printf("\n");
    for (p1 = t; p1 < t + n; p1++)
    {
        printf("t[%d] : %d\n", p1 - t, *p1);
    }
    return 0;
}