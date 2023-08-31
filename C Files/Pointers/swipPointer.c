#include <stdio.h>

void echange(int *pA, int *pB)
{
    int temp=*pA;
    if (*pA**pB>0) 
    {
        *pA=*pB;
        *pB=temp;
    }
    else
    {
        *pA+=*pB;
        *pB*=temp;
    }
    
}
int main()
{
    int a=-8;
    int b=4;
    echange(&a, &b);
    printf("a = %d and b = %d",a,b);
    return 0;
}