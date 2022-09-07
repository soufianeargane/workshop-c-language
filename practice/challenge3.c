#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Metre, Mile;
	printf("tapez distance en Metre: ");
	scanf("%f", &Metre);
	Mile = Metre * 1.609 / 1000;
	printf("distance en MiLe est =%f", Mile);
    return 0;
}
