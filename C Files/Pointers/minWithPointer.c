#include <stdio.h>

int main()
{
    int t[5];
    
    int *p;
    for (p=t; p < t+5; p++)
    {
        printf("t[%d] - give number : ",p-t);
        scanf("%d",p);
    }
    int min=t[0];
    for (p=t; p < t+5; p++)
    {
        if(min>*p) {
            min=*p;
        }
    }
    printf("min %d",min);
    return 0; //goto
}