# include <stdio.h>
# include <stdlib.h>
int main () {
	


char x;

printf("type a letter to find out if it is a vowel : ");
scanf("%c",&x);

switch(x)
{
case 'a': printf("yes");
   break;
   
case 'e': printf("yes");
   break;
   
case 'i': printf("yes");
   break;
   
case 'o': printf("yes");
   break;
   
case 'u': printf("yes");
   break;
   
case 'y': printf("yes");
   break;
   
default : printf("it is not");
   break;
}

}
