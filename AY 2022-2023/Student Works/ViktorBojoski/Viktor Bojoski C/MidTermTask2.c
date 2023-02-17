#include <stdio.h>

int main(){
	printf("How many teams are participating in the tournament? ");
	int number_of_teams;
	scanf("%d",&number_of_teams);
	for (int i=1; i<=number_of_teams; i++){
		  for (int j = i + 1; j <= number_of_teams; j++) {
		if(i<=number_of_teams){
			printf("Team %d vs Team %d\n",i, j);
			}
		}
	}
	return 0;
}