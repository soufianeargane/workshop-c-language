# include <stdio.h>
# include <stdlib.h>
int main(){
	
	
	float r;
	printf("tapez le rayon du cercle");
	scanf("%f", &r);
	r = 3.14 * r * 2;
	printf("la circonfeence d'un cercle est %.2f", r);
	return 0;
	
}
