#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i;
	int hour, min, sec;
	
	printf("input the second : ");
	scanf("%i", &i);
	
	hour = i/3600;
	min = (i%3600)/60;
	sec = (i%3600)%60;
		
	printf("the time for %i second is %i : %i : %i", i, hour, min, sec);
	
	return 0;
}
