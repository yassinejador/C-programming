#include <stdio.h>
#include <string.h>

int main() {
    struct Players
    {
        char name[30];
        int goals;
    };
    struct Players player1;
    struct Players player2;
    strcpy(player1.name,"nayf");
    strcpy(player2.name,"mazraoui");

    player1.goals=17;
    player2.goals=19;

    printf("%s has %d goals\n",player1.name,player1.goals);
    printf("%s has %d goals",player2.name,player2.goals);
    return 0;
}