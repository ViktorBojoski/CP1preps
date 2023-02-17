#include <stdio.h>
int main (){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("n = %d\n",n);

	for (int i=n; i>=1; i--){
		for (int j=n; j>i; j--){
			printf(" ");
		}//endinnerloop
		for (int k=1; k<=i; k++){
			printf("*");
		}//endloop
		printf("\n");
	}//endforloop
	return 0;
}