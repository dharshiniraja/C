#include <stdio.h>

int main() {
	int n,a[20],i=0,re=0;
	scanf("%d",&n);
	while(n>0)
	{
	    re=n%10;
	    a[i]=re;
	    i=i+1;
	    n=n/10;
	}
	for(int j=i-1;j>=0;j=j-2)
	 {
	     if(j!=0)
	     {
	       printf("%d",a[j-1]);
	       printf("%d",a[j]);
	     }
	     else
	     {
	        printf("%d",a[0]); 
	     }
	  }

	return 0;
}


Input:
54687
546897
Ouput:
45867
548679
