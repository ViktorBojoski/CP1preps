#include <stdio.h>

int main() {
    int numTeams, i, j;
    printf("Enter the number of teams: ");
    scanf("%d", &numTeams);
    for (i = 1; i <= numTeams; i++) {
        for (j = i + 1; j <= numTeams; j++) {
            printf("Team %d vs. Team %d\n", i, j);
        }
    }
    return 0;
}
