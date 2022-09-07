# include <stdio.h>
# include <stdlib.h>

int main(){
	
	float a, b, c, d, somme, moyene;
	printf("type four numbers: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	somme = a+b+c+d;
	moyene= somme/4;
	printf("la somme est :%.2f \n", somme);
	printf("la moyene est :%.2f", moyene);
	return 0;
}
