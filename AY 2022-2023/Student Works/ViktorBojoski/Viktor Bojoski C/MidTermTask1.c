#include <stdio.h>

int main(){
	printf("Enter value for n: ");
	int n;
	scanf("%d",&n);
	int temp=5;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (i==0){
				printf("*");
			}else if (i == n-1){
				printf("*");
			}else if (i + j == n-1){
			printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}