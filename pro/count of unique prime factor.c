#include<stdio.h>
int main()
{
    int n,flag=0,c=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
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
                c+=1;
            }
        }
    }
    printf("%d",c);
    return 0;
    
}

Input:
12
Output:
2 (because 2 and 3 are the unique prime factors of 12 and their count is 2)
