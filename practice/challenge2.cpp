#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("tapez la temperature en F: ");
    scanf("%f", &F);
    C = (F - 32)/1.8;
    printf("temperature en C est =%f", C);
    return 0;
}
