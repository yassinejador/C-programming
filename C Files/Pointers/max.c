#include <stdio.h>
int max(int*a,int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    return *b;
}
int main()
{
    int a=10;
    int b=9;
    printf("max is : %d",max(&a,&b));
    return 0;
}