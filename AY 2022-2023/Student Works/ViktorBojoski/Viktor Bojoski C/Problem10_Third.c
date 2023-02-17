#include <stdio.h>

#define Max_Size 100

int main(){
    printf("Enter the dimension of the array: ");
    int dimension;
    scanf("%d", &dimension);
    
    int array[Max_Size];
    int evenArray[Max_Size];
    int oddArray[Max_Size];
    
    int evenCount = 0;
    int oddCount = 0;
    
    printf("Enter the elements in the array: ");
    for (int i = 0; i < dimension; i++){
        scanf("%d", &array[i]);
        
        if (array[i] % 2 == 0) {
            evenCount++;
            evenArray[evenCount] = array[i];
        } else {
            oddCount++;
            oddArray[oddCount] = array[i];
        }
    }
    
    printf("The even elements from the array are: ");
    for (int i = 0; i <= evenCount; i++) {
        printf("%d ", evenArray[i]);
    }
    
    printf("\nThe odd elements from the array are: ");
    for (int i = 0; i <= oddCount; i++) {
        printf("%d ", oddArray[i]);
    }
    
    return 0;
}
