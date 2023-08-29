#include <stdio.h>
#include <string.h>

int main() {
    enum Days {
        monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6,sunday=7
    };
    enum Days today=monday;
    printf("%d",today);
    return 0;
}