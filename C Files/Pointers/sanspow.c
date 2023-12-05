#include <stdio.h>
int main()
{
    int n;
    int p=1;
    float s=0;
    printf("n :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        s=s+(1/(float)(p*2));
        p=p*2;
    }
    printf("la somme est :%f",s);
    return 0;
}