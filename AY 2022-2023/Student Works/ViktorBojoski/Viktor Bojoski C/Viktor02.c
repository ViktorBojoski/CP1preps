#include <stdio.h>

int main() {
    int num, count = 0;
    double sum = 0;

    while (1) {
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("ERROR\n");
        } else if (num == 0) {
            if (count == 0) {
                printf("NO AVERAGE\n");
            } else {
                printf("Average: %lf\n", sum / count);
            }
            break;
        } else {
            sum += num;
            count++;
        }
    }

    return 0;
}
