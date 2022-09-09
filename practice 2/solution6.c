# include <stdio.h>
# include <stdlib.h>

int main (){
	
	float x;
	printf("tapez un nombre: ");
	scanf("%d", &x);
	
	if (x > 0){
		printf("le nombre est positif.");	
	}
	else if (x == 0){
		printf("le nombre est nul.");	
	}
	else{
		printf("le nombre est negatif.");	
	}
}
