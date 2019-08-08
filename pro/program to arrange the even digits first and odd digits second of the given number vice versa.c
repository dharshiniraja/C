#include <stdio.h>

int main() {
	int n,m,a[20],b[20],re=0;
    scanf("%d %d",&n,&m);
    int i=0,j=0;
    while(m>0)
    {
        re=m%10;
        if(re%2==0)
        {
             
                a[i]=re;
                i++;
            m=m/10;
        }
        else
        {
                b[j]=re;
                j++;
            m=m/10;
        }
    }
    if(n==1)
    {
        for(int k=i-1;k>=0;k--)
        {
            printf("%d",a[k]);
        }
        for(int l=j-1;l>=0;l--)
        {
            printf("%d",b[l]);
        }
    }
    else
    {
        for(int l=j-1;l>=0;l--)
        {
            printf("%d",b[l]);
        }
        for(int k=i-1;k>=0;k--)
        {
            printf("%d",a[k]);
        }
        
    }
	return 0;
}



Input:
0 89745
1 89745
Output:
97584
84975
