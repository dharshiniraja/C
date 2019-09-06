#include <stdio.h>
#include<string.h>
int main() {
	char a[1000],b[10000];
	scanf("%s %s",a,b);
	int s=strlen(a),m=0;
	int r=strlen(b);
	if(s!=r)
	{
	    printf("-1");
	}
	else
	{
	    for(int i=0;i<s;i++)
	    {
	        for(int j=i+1;j<r;j++)
	        {
	            if(a[i]>a[j])
	            {
	                char temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    for(int i=0;i<s;i++)
	    {
	        for(int j=i+1;j<r;j++)
	        {
	            if(b[i]>b[j])
	            {
	                char temp=b[i];
	                b[i]=b[j];
	                b[j]=temp;
	            }
	        }
	    }
	    for(int i=0;i<s;i++)
	    {
	        if(a[i]==b[i])
	        {
	            m++;
	        }
	    }
	    if(m==s)
	    {
	        printf("1");
	    }
	    else
	    {
	        printf("-1");
	    }
	}
	return 0;
}


Input:
sample elmpas
ab bc

Output:
1(If same print 1)
-1(if different print -1)
