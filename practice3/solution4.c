# include <stdio.h>
# include <stdlib.h> 
int main (){
	int n,i,s=0;
	for(i=0;i<=10000;i++){
		scanf("%d",&n);
		
		if(n>100) continue;
		s=s+n;
		if(n==0) break;
	}
	printf("%d", s);
}



/*# include <stdio.h>
# include <stdlib.h> 
int main (){
	int n,i,s;
	do {
		printf("tapez");
		scan("%d", &n);
	} while(n==0);
	s=0;
	for(i=1; i<= 10000;i++){
		if(n>100) continue;
		s=s+n;
	}
	printf("somme est %d", s);
}
# include <stdio.h>
# include <stdlib.h> 
int main (){
	int n,i,s;
	do {
		printf("tapez");
		scan("%d", &n);
	} while(n==0);
	s=0;
	for(i=1; i<= 10000;i++){
		if(n>100) continue;
		s=s+n;
	}
	printf("somme est %d", s);
}*/


