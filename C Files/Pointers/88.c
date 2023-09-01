#include <stdio.h>

int main()
{
    int n;
    int m;
    printf("Donner la taille de tableau A : ");
    scanf("%d", &n);
    printf("Donner la taille de tableau B : ");
    scanf("%d", &m);
    int a[n + m];
    int b[m];
    int *pA, *pB;
    for (pA = a; pA < a + n; pA++)
    {
        printf("A[%d] = ", pA - a);
        scanf("%d", pA);
    }
    for (pB = b; pB < b + m; pB++)
    {
        printf("B[%d] = ", pB - b);
        scanf("%d", pB);
    }

    for (pA = a + n, pB = b; pB <b+m; pA++, pB++)
    {
        *pA = *pB;
    }
    //////////////////////////////
    for (pA = a; pA < a + n + m; pA++)
    {
        printf("A[%d] = %d\n", pA - a, *pA);
    }
}
