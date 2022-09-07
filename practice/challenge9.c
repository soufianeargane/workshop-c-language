# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main(){
	
	int x1, x2, y1, y2, a, b, c, MN;
	printf("tapez les coordonnées du premier point: \n");
	printf("tapez x1: \n");
	scanf("%d", &x1);
	printf("tapez y1: \n");
	scanf("%d", &y1);
	
	printf("tapez les coordonnées du Deuxième  point: \n");
	printf("tapez x2: \n");
	scanf("%d", &x2);
	printf("tapez y2: ");
	scanf("%d", &y2);
	
	a = pow((x2 - x1),2);
	b = pow((y2 - y1),2);
	c= a + b;
	MN = sqrt(c);
	printf("MN is %d", MN);
	return 0;
	
}
