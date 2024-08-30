#include <stdio.h>

#define MAX_PLAYERS 100

typedef union
 {
    float batting_average;
    int number_wickets;
} PlayerDetails;

typedef struct 
{
    char name[100];
    int type;
    PlayerDetails details;
} Player;

int main()
 {
    int n, i;

    printf("Enter the number of players: ");
    scanf("%d", &n);

    Player players[MAX_PLAYERS];

    for (i = 0; i < n; i++)
     {
        printf("\nPlayer %d\n", i + 1);
        printf("Enter the player's name: ");
        scanf("%s", players[i].name);

        printf("Enter the player's type (1 - batsman, 2 - bowler): ");
        scanf("%d", &players[i].type);

        if (players[i].type == 1)
         {
            printf("Enter the batting average: ");
            scanf("%f", &players[i].details.batting_average);
        }
         else
          if (players[i].type == 2) 
        {
            printf("Enter the number of wickets: ");
            scanf("%d", &players[i].details.number_wickets);
        }
         else
          {
            printf("Invalid player type.\n");
            i--;
        }
    }

    printf("\nPlayer Details\n");
    printf("--------------\n");

    for (i = 0; i < n; i++)
     {
        printf("Player %d\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Type: %d\n", players[i].type);

        if (players[i].type == 1) 
        {
            printf("Batting Average: %.2f\n", players[i].details.batting_average);
        } else if (players[i].type == 2)
         {
            printf("Number of Wickets: %d\n", players[i].details.number_wickets);
        }

        printf("\n");
    }

    return 0;
}
