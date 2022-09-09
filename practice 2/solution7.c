# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main () {
	char ch;
	printf("enter a letter: ");
	scanf("%c", &ch);
	if (( ch >= 'A') && (ch <= 'Z')){
		printf("you entered an uppercase letter");
	}
	else {
		printf("you entered a lowercase letter");
	}
}
