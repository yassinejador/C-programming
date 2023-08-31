#include<stdio.h>

int main() {
    int x=5;
    int y=2;
    float z=x/(float) y;
    printf("%0.2f\n",z);

    int a=1;
    int b=1;
    b+=a++; //b = 1
    b+=++a; //b = 2
    printf("a : %d\n",a);
    printf("b : %d",b);

    return 0;
}