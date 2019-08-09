#include <stdio.h>

int main() {
	int n,flag=0,t;
	scanf("%d",&n);
	t=n;
	for(int i=(n/2);i>0;i--)
	{
	    if(t%i==0)
	    {
	        for(int j=2;j<=i/2;j++)
	        {
	            if(i%j==0)
	            {
	                flag=1;
	                break;
	            }
	            
	        }
	       if(flag==0)
	       {
	          printf("%d",i);
	          break;
	       }
	    }
	}
	
	return 0;
}


Input:
15
Output:
5
