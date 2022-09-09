# include <stdio.h>
# include <stdlib.h>
//# include <conio.h>

int main () {
	char ch;
	printf("enter a letter: ");
	scanf("%c", &ch);
	if (( ch >= 'A') && (ch <= 'Z')){
		printf("you entered an alphabet and it is an uppercase letter");
	}
	else if (( ch >= 'a') && (ch <= 'z')) {
		printf("you entered an alphabet and it is a lowercase letter");
	}
	else{
		printf("you did not enter an alphabet");
	}
	return 0;
}
