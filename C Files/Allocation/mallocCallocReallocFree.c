#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1, *p2, *p3;
    p1 = malloc(40);
    printf("allocation p1 : %p\n", p1);
    p2 = malloc(30);
    printf("allocation p2 : %p\n", p2);
    free(p1);
    p3 = malloc(30);
    printf("allocation p2 : %p\n", p1);
    p3 = calloc(3, 30);
    realloc(p2, 30);
    free(p1),
        free(p2),
        free(p3),
        printf("allocation p2 : %p\n", p1);
    return 0;

    /*
        malloc(bytes)
        calloc(nmbrElement, bytes)
        realloc(pointer, bytes(+ or -)) augmenter ou dimunation
        free(pointer) librer memoir
    */
}