#include <stdio.h>
#include <string.h>
int main(){

	printf("Enter your name: ");
	char name[15];
	scanf("%14s",name);

	int count = strlen(name); //char count

	/*while(name[count] != '\0'){
		count++;
	}*/

	printf("char count: %d\n", count);

	return 0;
}