#include <stdio.h>
#include <stdlib.h>


int main()
{
    float Metre, Mile;
	printf("tapez distance en Mile: ");
	scanf("%f", &Mile);
	Metre = Mile * 1.609 * 1000;
	printf("distance en MiLe est =%f", Metre);
    return 0;
}
