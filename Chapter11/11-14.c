#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 5
#define MAX_NAME_LEN 50
#define MAX_TEAM_LEN 30

struct cricket {
    char name[MAX_NAME_LEN];
    char team[MAX_TEAM_LEN];
    float average;
};

struct cricket players[MAX_PLAYERS];

// function to read information about all 50 players
void readData() {
    int i;
    for (i = 0; i < MAX_PLAYERS; i++) {
        printf("Enter player name: ");
        scanf("%s", players[i].name);
        printf("Enter team name: ");
        scanf("%s", players[i].team);
        printf("Enter batting average: ");
        scanf("%f", &players[i].average);
    }
}

// function to print a team-wise list of players and their batting average
void printData() {
    int i, j;
    for (i = 0; i < MAX_PLAYERS; i++) {
        for (j = i + 1; j < MAX_PLAYERS; j++) {
            if (strcmp(players[j].team, players[i].team) < 0) {
                struct cricket temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    char currentTeam[MAX_TEAM_LEN] = "";
    for (i = 0; i < MAX_PLAYERS; i++) {
        if (strcmp(players[i].team, currentTeam) != 0) {
            strcpy(currentTeam, players[i].team);
            printf("\nTeam: %s\n", currentTeam);
        }
        printf("Name: %s\tBatting Average: %.2f\n", players[i].name, players[i].average);
    }
}
int main() {
    readData();
    printData();
    return 0;
}
