#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int a=0,b=1,c=0;
	for(int i=0;i<n;i++)
	{
	    c=a+b;
	    a=b;
	    b=c;
	    printf("%d ",a);
	}
	return 0;
}
Input:
7
Output:
1 1 2 3 5 8 13
