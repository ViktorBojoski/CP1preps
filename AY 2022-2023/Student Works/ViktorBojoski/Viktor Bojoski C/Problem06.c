#include <stdio.h>

int main() {
    int input;
    while (input != 999) {
        printf("Enter a one or two-digit integer (999 to exit): ");
        scanf("%d", &input);
        if (input == 999) {
            break;
        }
        for (int i = 0; i < 3; i++) {
            printf("%d", input);
        }
        printf("\n");
    }
    return 0;
}
