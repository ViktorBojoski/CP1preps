#include <stdio.h>

int main() {
    int number;
    int smallest;
    for (int i = 1; i <= 10; i++) {
        printf("Enter the %d%s positive integer: ", i, i == 1 ? "st" : i == 2 ? "nd" : i == 3 ? "rd" : "th");
        scanf("%d", &number);
        if (i == 1 || number < smallest) {
            smallest = number;
        }
    }
    printf("The smallest number is %d\n", smallest);
    return 0;
}
