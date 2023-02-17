#include <stdio.h>
int main(){
	printf("Enter number: ");
	int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d, ", i);
        printf("%d, ", n - i + 1);
	
	}
	return 0;
}