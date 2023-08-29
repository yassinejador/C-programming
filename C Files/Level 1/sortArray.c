#include <stdio.h>

int main()
{
    int min;
    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        for (int j = 0; j < (sizeof(numbers) / sizeof(numbers[0])) - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                min = numbers[j + 1];
                numbers[j + 1] = numbers[j];
                numbers[j] = min;
            }
        }
    }

    for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        printf("%d - ", numbers[i]);
    }
    return 0;
}