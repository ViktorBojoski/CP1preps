#include <stdio.h>

int main() {
    printf("Please enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n * 2 - 1; i++) {
        int num_stars = i <= n ? i : n * 2 - i;
        for (int j = 1; j <= num_stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
