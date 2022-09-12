# include <stdio.h>
# include <stdlib.h>

int main (){
    int i, n;
	scanf("%d",&n);
	if(n==2){printf("prime");
	}
	if(n==1){printf("prime");
	}
	
	for (i = 1 ;i<n;i++){
		if (i!=n && i!=1){
			if(n%i==0) {printf("not prime"); break;
			}
			else {printf("prime"); break;
			}
		}
		
	}
}
	


/*# include <stdio.h>
# include <stdlib.h>

int main (){
	int i, n,s=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
	    if(i!=1 && i!=n){
	    	if(n%i==0){
	    	s++;
		    }    
		}
	}
	if(s ==0){
		printf("oui");
	}else{
		printf("non");
	}
	

	return 0;
}*/
