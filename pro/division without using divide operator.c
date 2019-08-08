#include <stdio.h>

int main()
{
    int n,m,c=0,temp;
    scanf("%d %d",&n,&m);
    temp=n;
    while(n>=m)
    {
        n=n-m;
        c++;
    }
    printf("%d / %d = %d\n",temp,m,c);
    printf("%d %% %d = %d",temp,m,n);
    
        
    

    return 0;
}

Input:
90 5
Output:
90 / 5 = 18
90 % 5 = 0
