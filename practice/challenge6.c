#include <stdio.h>
#include <stdlib.h>

int main()
{
   float F, C;
   printf("type the temperature in F: ");
   scanf("%f", &F);
   C = (F-32)/1.8;
   printf("C equals =%.2f", C);
   return 0;
}
