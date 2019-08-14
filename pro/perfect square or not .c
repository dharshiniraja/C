#include <stdio.h>

int main() {
	int n,flag=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
	    if(n==i*i)
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;
}

Input:
81
12

Output:
yes
no
