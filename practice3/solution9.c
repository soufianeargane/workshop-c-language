
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main (){
	int x,y,p;
	
	do {
		printf("tapez un nombre x plus zero et et y plus oe egal zero: ");
		scanf("%d%d",&x,&y);
		p=pow(x,y);
	}while (x<=0 || y<0 );
	printf("%d",p);
}
