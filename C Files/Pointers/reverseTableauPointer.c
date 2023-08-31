#include <stdio.h>

int main()
{
    int t[5];
    int n;
    int *p1, *p2;
    int temp;
    printf("donne la taille de tableau : ");
    scanf("%d", &n);
    for (p1 = t; p1 < n + t; p1++)
    {
        printf("donne une nombre t[%d] : ", p1 - t);
        scanf("%d", p1);
    }
    for (p1 = t, p2 = t + (n - 1); p1 < p2; p1++, p2--)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    for (p1 = t; p1 < n + t; p1++)
    {
        printf("donne une nombre t[%d] : %d\n", p1 - t, *p1);
    }
    return 0;
}