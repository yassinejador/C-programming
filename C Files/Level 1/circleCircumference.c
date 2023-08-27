#include <stdio.h>
#include <math.h>
int main() {
    const float PI=3.14159;
    float raduis;
    float cc;
    float area;
    printf("enter the raduis of a circle :");
    scanf("%f",&raduis);

    cc=2*PI*raduis;
    area=pow(raduis,2)*PI;
    printf("circle circumference %f and area is %f",cc,area);
    return 0;
}