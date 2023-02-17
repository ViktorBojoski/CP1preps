#include <stdio.h>

#define Rows 9
#define Columns 9

int main(){
	int rows,columns, first[Rows][Columns], second[Rows][Columns], result[Rows][Columns];
	printf("Enter two positive numbers: ");
	scanf("%d %d", &rows, &columns);

	if ( rows < 0 || rows > 10 || columns < 0 || columns > 10 ){
		printf("Please enter two positive integers ");
		return 1;
	}
	//asking the user to enter the elements for the first matrix
	printf("Enter the elements for the first matrix ");
	for (int i=0; i<rows; i++){
		for (int j=0; j<columns; j++){
			printf("Enter element %d%d: ", i+1, j+1);
			scanf("%d", &first[i][j]);
		}
	}
	//printing the first matrix
	printf("Entered first matrix:\n");
	for (int i=0; i<rows; i++){
		for (int j=0; j<columns; j++){
			printf("%d " , first[i][j]);
		}
		printf("\n");
	}
// Prompt user to enter elements of the second matrix
    printf("Enter elements of the second matrix (%d x %d):\n", columns, rows);
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("Enter element e%d%d: ", i+1, j+1);
            scanf("%d", &second[i][j]);
        }
    }
	
	// Print the second matrix
    printf("Entered second matrix:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }
	//multiplying the two matrices
	for (int i=0; i<rows; i++){
		for (int j=0; j<rows; j++){
			result[i][j]=0;
			for (int k=0; k<columns; k++){
				result[i][j]+=first[i][k]*second[k][j];
			}
		}
	}
	//printing the multiplied matrix
	printf("The multiplied matrix is: \n");
	for (int i=0; i<rows; i++){
		for (int j=0; j<rows; j++){
			printf("%d " ,result[i][j]);
		}
		printf("\n");
	}
	return 0;
}