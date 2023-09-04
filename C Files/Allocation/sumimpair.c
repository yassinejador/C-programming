#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n=calloc(1,sizeof(int));
    int *s=calloc(1,sizeof(int));
    printf("donne nombre : ");
    scanf("%d",n);
    for (int i = 1; i <=*n; i+=2)
    {
        *s+=i;
    }
    printf("la somme :%d",*s);
    free(s);
    free(n);
    return 0;
}