#include <stdio.h>
#include <stdlib.h>
// Structure to represent a player's score
typedef struct {
    int score;
    int rank;
} Player;

// Function to calculate the rank of a player
int calculateRank(int score, int leaderboard[], int leaderboardSize) {
    int rank = 1;
    for (int i = 0; i < leaderboardSize; i++) {
        if (score < leaderboard[i]) {
            rank++;
        } else if (score == leaderboard[i]) {
            return rank; // If score matches, return current rank
        }
    }
    return rank;
}

int main() {
    int leaderboard[] = {100, 90, 90, 80, 60};
    int leaderboardSize = sizeof(leaderboard) / sizeof(leaderboard[0]);
    int yourScores[] = {50, 65, 77, 90, 102};
    int numScores = sizeof(yourScores) / sizeof(yourScores[0]);
    int ranks[numScores];

    // Calculate ranks for each of the player's scores
    for (int i = 0; i < numScores; i++) {
        ranks[i] = calculateRank(yourScores[i], leaderboard, leaderboardSize);
        printf("Score: %d, Rank: %d\n", yourScores[i], ranks[i]);
    }

    return 0;
}
