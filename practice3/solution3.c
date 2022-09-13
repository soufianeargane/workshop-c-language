#include <stdio.h>

int main() {

  int n, i, p = 0;
  scanf("%d", &n);

 
  if (n == 0 || n == 1)
    p = 1;

  for (i = 2; i < n ; i++) {

    if (n % i == 0) {
      p = 1;
      break;
    }
  }

  if (p == 0)
    printf(" prime number.");
  else
    printf(" not a prime number.");

  return 0;
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
