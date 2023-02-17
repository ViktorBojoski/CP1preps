#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int R, C, i, j, k;
    int A[MAX_ROWS][MAX_COLS], B[MAX_COLS][MAX_ROWS], result1[MAX_ROWS][MAX_ROWS];

    // Prompt user to enter R and C
    printf("Enter two positive numbers R and C (less than 10): ");
    scanf("%d %d", &R, &C);

    // Validate input
    if (R < 0 || R > 10 || C < 0 || C > 10) {
        printf("Error: Invalid input. R and C must be positive integers less than 10.\n");
        return 1;
    }

    // Prompt user to enter elements of the first matrix
    printf("Enter elements of the first matrix (%d x %d):\n", R, C);
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("Enter element e%d%d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // Print the first matrix
    printf("Entered first matrix:\n");
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Prompt user to enter elements of the second matrix
    printf("Enter elements of the second matrix (%d x %d):\n", C, R);
    for (i = 0; i < C; i++) {
        for (j = 0; j < R; j++) {
            printf("Enter element e%d%d: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    // Print the second matrix
    printf("Entered second matrix:\n");
    for (i = 0; i < C; i++) {
        for (j = 0; j < R; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Multiply the two matrices
    for (i = 0; i < R; i++) {
        for (j = 0; j < R; j++) {
            result1[i][j] = 0;
            for (k = 0; k < C; k++) {
                result1[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Result of multiplication (%d x %d matrix):\n", R, R);
    for (i = 0; i < R; i++) {
        for (j = 0; j < R; j++) {
            printf("%d ", result1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
