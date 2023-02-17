#include <stdio.h>

int main (){
	printf("Enter the dimension of the array: (min->5)(max->25)");
	int dimension;
	scanf("%d",&dimension);
	int array[dimension];
	if (dimension < 5 || dimension > 25){
		printf("The dimension needs to be bigger than 5 and less than 25");
		return 1;
	}
	//asking the user to insert the elements into the array
	for (int i=0; i<dimension; i++){
		printf("Enter the %dth element: ", i+1);
		scanf("%d",&array[i]);
	}
	//checking if there is same elements in the array
	int dnumber=dimension;
	for (int i=0; i<dimension; i++){
		for (int j=i+1; j<dimension; j++){
		if (array[i]==array[j]){
				dnumber--;
				break;
			}		
		}
	}
	
	printf("The number of different numbers in the array is: %d",dnumber);
	return 0;
}

