#include <stdio.h>
#include <string.h>

int main()
{
    char FullName[30];
    int age;
    char habit[25];
    printf("Your Full name : ");
    fgets(FullName,30,stdin);

    printf("Your age : ");
    scanf("%d",&age);

    printf("Your habit : ");
    scanf("%s",&habit);
    printf("Hello %syou have %d years old\nand you habit is %s",FullName,age,habit);
    return 0;
}