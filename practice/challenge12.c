# include <stdio.h>
# include <stdlib.h>

int main (){
	char n[3], num1, num2, num3, reverse;
	scanf("%s", &n);
	/*num1 = n/100;
	num2 = (n%100)/10;
	num3 = n%10;
	reverse = num3*100 + num2*10 + num1;*/
	printf("reverse is %s", strrev(n));
	

    return 0;
}
