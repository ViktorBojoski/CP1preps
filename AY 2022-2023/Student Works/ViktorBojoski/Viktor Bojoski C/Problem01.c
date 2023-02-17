#include <stdio.h>

int main(){
    printf("Please enter a number: ");
    int n;
    scanf("%d", &n);
    printf("The number is %d\n", n);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                printf("*");
            }else if( i < j){
            	printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}