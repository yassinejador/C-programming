#include <stdio.h>
#include <string.h>

int main()
{
    char name[][20] = {"yassine", "yasser", "ahmed"};
    strcpy(name[2], "ilyass");
    for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++)
    {
        printf("%s\n", name[i]);
        printf("----------\n");
    }

    return 0;
}