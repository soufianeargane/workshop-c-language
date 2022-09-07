#include <stdio.h>
#include <stdlib.h>

int main()
{
   
   float a, b, c, d, e, f, g;
   printf("tapez a: ");
   scanf("%f", &a);
   printf("tapez b: ");
   scanf("%f", &b);
   c=a+b;
   d=a-b;
   e=a*b;
   f=a/b;
   g= (int) a % (int) b;
   printf("a+b= =%.2f \n", c);
   printf("a-b= =%.2f \n", d);
   printf("a*b= =%.2f \n", e);
   printf("a/b= =%.2f \n", f);
   printf("a%b= =%d", g);
 
   
   return 0;
}
