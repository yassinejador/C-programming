#include <stdio.h>

int main()
{
    FILE *pF = fopen("script.js", "r");
    char lines[255];
    if (pF == NULL)
    {
        printf("file not exist");
    }
    else
    {
        while (fgets(lines, 255, pF) != NULL)
        {
            printf("%s", lines);
        }
    }

    return 0;
}