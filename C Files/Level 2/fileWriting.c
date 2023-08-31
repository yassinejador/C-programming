#include <stdio.h>
#include <stdbool.h>
int main() {
    //FILE *pF=fopen("script.js","a");

    //Create file if not exist 
    FILE *pF=fopen("script.js","w");
    fprintf(pF,"console.log('hello world');");
    fclose(pF);

    if(remove("script.js")==0) {
        printf("file was removed successfully");
    }
    else {
        printf("file may be not exist!!");
    }
    return 0;
}