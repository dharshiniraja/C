#include<stdio.h>
int main()
{
    int n,m,re=0,t=0,fla=0;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        int flag=0;
        for(int j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            int temp=i,fla=0,t=0;
            while(temp>0)
            {
                re=temp%10;
                t=t*10+re;
                temp=temp/10;
            }
            for(int k=2;k<=(t/2);k++)
            {
                if(t%k==0)
                {
                    fla=1;
                    break;
                }
            }
            if(fla==0)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}

Input:
10 50
Output:
11 13 17 31 37 
