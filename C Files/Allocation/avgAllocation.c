#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum;
    float avg;
    printf("donne la taille de tableau : ");
    scanf("%d", &n);
    int *t = malloc(n * sizeof(int));
    for (int i=0; i < n; i++)
    {
        printf("t[%d] = ", i);
        scanf("%d", t+i);
    }
    for (int i=0; i < n; i++)
    {
        sum += *(t+i);
    }
    avg = sum / (float)n;
    printf("La somme est : %d\nla moyenne est : %.2f", sum, avg);
    free(t);
    return 0;
}