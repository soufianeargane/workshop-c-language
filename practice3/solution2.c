# include <stdio.h>
# include <stdlib.h>

int main () {
	int i, n,j, et=1, es;
	scanf("%d", &n);
	es=n-1;
	for(i=0;i<n;i++){
		for(j=0;j<es;j++)printf(" ");
		for(j=0;j<et;j++)printf("*");
		printf("\n");
		et+=2;
		es--;
	}
}

/*int main () {
	int i, n,j;
	scanf("%d", &n);
	for(i=n; i>=1;i--){
		printf("\n");
		for(j=1;j<=n;j++){
			if(j>i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		for( j=n;j>=i;j--){
                printf("*");
		}
	}

	return 0;
}*/

