#include <stdio.h>
int main(){
	int week;

	printf("Enter a num 1-7");
	scanf("%d", &week);

	switch(week){
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wed\n");
		break;
	case 4:
		printf("thu\n");
		break;
	case 5:
		printf("fri\n");
		break;
	case 6:
		printf("sat\n");
		break;
	case 7:
		printf("sun\n");
		break;
	default:
		printf("enter a num between 1-7:");
	}

	return 0;
}