
# include <stdio.h>
# include <stdlib.h>
int main (){
	int n, reverse=0;
	scanf("%d",&n);
	do {
		reverse= (reverse*10) + (n%10);
		n=n/10;
	} while(n!=0);
	printf("%d", reverse);
}







/*
# include <stdio.h>
# include <stdlib.h>
int main (){
    int n, m, i;
    int list[100];
    int list_rev[100];
    int s=0;

	scanf("%d",&n);
	for ( i=0;i<n;i++){
        scanf("%d",&m);
        list[i]=m;
	}

	for(i=n-1;i>=0;i--){
        list_rev[s]=list[i];
        s++;

	}
	for(i=0;i<n;i++){
        printf("%d",list_rev[i]);
	}

}
*/
