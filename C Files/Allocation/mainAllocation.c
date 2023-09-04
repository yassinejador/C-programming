#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n = calloc(1, sizeof(int));
    printf("donne la taille de tableau : ");
    scanf("%d", n);
    int *t = calloc(*n, sizeof(int));
    int *min = calloc(1, sizeof(int));
    
    for (int i = 0; i < *n; i++)
    {
        printf("t[%d] = ", i);
        scanf("%d", t + i);
    }
    *min = *(t+0);
    for (int i = 0; i <*n; i++)
    {
        if (*min > *(t + i)) 
        {
            *min = *(t + i);
        }
    }
    printf("le petit element est :%d", *min);
    free(n);
    free(t);
    free(min);
    return 0;
}