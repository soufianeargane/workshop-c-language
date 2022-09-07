# include <stdio.h>
# include <stdlib.h>

int main() {
	
	float longueur, largeur, circonference;
	printf("tapez longeur et largeur");
	scanf("%f %f", &longueur, &largeur);
	circonference = 2* (longueur + largeur);
	printf("la circonference d'un cercle est %.2f", circonference);
	return 0;
	


}
