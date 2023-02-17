#include <stdio.h>

int main() {
    int rows, columns, total_squares;

    printf("Number of rows: ");
    scanf("%d", &rows);
    printf("Number of columns: ");
    scanf("%d", &columns);

    total_squares = (rows * (rows + 1) * columns * (columns + 1)) / 4;

    printf("Total number of squares: %d\n", total_squares);

    return 0;
}
