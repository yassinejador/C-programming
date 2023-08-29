#include <stdio.h>
#include <string.h>

int main()
{
    char name[30]="";
    printf("your name : ");
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';
    while (strlen(name) == 0)
    {
        printf("your name : ");
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("your name is : %s", name);

    return 0;
}