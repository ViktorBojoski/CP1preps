#include <stdio.h>
int main(){
	int number=0;
	printf("Enter a number:");
	scanf("%d",&number);

	for (int i=1; i<=number; i++){
		for (int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}//endouterforloop
	for (int i=number-1; i>=1; i--){
		for (int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;

}