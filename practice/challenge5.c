#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("tapez la temperature en F: ");
    scanf("%f", &F);
    C = (F - 32)/1.8;
    printf("temperature en C est =%f \n", C);
    if (C <= 10){
    	printf("très froid");
	}
	else if (C <= 20 ){
		printf("froid");
	}
	else if (C <= 30 ){
		printf("chaud");
	}
	else if (C <= 40 ){
		printf("très froid");
	}
    return 0;
}
