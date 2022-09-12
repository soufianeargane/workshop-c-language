# include <stdio.h>
# include <stdlib.h>

int main (){
	int p[100];
	int i, n,f,s=0;
	int e=0;
	scanf("%d", &n);
	for(f=2;f<=n;f++){
		for(i=1;i<=f;i++){
	    if(i!=1 && i!=f){
	    	if(){ 
	    	s++;
		    } else{
		    	p[e]=f;
		    	e++;
		    	//break;
			} 
		}
	   }
	}
	
   	printf("%d",p[3]);
	
    
	

	return 0;
}
