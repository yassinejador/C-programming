#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        int idPl;
        char name[30];
        char team[30];
    } Players;

    // typedef char teams[30];

    Players player1 = {1, "Bono", "Seville FC"};
    Players player2 = {2, "nayf", "westham united"};

    // Array of Structs
    Players arrayPlayers[] = {player1, player2};
    int i = 0;
    while (i < sizeof(arrayPlayers) / sizeof(arrayPlayers[0]))
    {
        printf("%s has id : %d and he's team is %s\n", arrayPlayers[i].name, arrayPlayers[i].idPl, arrayPlayers[i].team);
        i++;
    }

    return 0;
}