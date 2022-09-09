# include <stdio.h>
# include <stdlib.h>
int main (){
	
	float moyenne;
	printf("tapez la moyenne: ");
	scanf("%f", &moyenne);
	printf("la moyenne est %.2f \n", moyenne);
	
	if ( (moyenne >= 10) && (moyenne <= 12)){
		
		printf("il obtient la mention passable");
	}
	else if ( (moyenne >= 12) && (moyenne <= 14)){
		
		printf("il obtient la mention assez bien");
	}
	else if ( (moyenne >= 14) && (moyenne <= 16)){
		
		printf("il obtient la mention bien");
	}
	else if ( moyenne >= 16){
		
		printf("il obtient la mention tres bien");
	}	
	else {
		printf("il est recalé");
	}
	
	

}
