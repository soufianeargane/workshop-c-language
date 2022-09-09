# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main (){
	
	int x, a ;
	printf("tapez l'annee: ");
	scanf("%d", &x);
	a = x % 4;
	if (a==0 ){
		 
		printf("it is a leap year.\n");
		printf("it has 12 months\n");
		printf("it has 366 days\n");
		printf("it has 8784 hours hours\n");
		printf("it has 527040 minutes\n");
		printf("it has 31622400 seconds ");	
	}
	else{
		printf("it is not a leap year. \n");
		printf("it has 12 months \n");
		printf("it has 365 days \n");
		printf("it has 8760 hours hours \n");
		printf("it has 525600 minutes \n");
		printf("it has 3153600 seconds \n");
	}
	
}
