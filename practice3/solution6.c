#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,p,ok;
    scanf("%d",&n);
    for(p=2;p<=n;p++)
    {
        ok=1;
        for(i=2;i<p;i++)
        {
            if(p%i==0) {ok=0; break; }
        }
        if(ok==1) printf("%d ",p);
    }
    
    return 0;
}


/*# include <stdio.h>
# include <stdlib.h>

int main (){
	int i, ok, p, n;
	scanf("%d", n);
	for (p=2; p<=n;p++){
		ok = 1;
		for (i=2;i<p;i++)
		{
			if (p%i==0){ok=0; }break;
		}
		if (ok==1) printf("%d",p);
	}
}*/
