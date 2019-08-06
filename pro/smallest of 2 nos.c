#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a<b)
        {
            printf("%d < %d",a,b);
        }
        else
        {
            printf("%d > %d",a,b);
        }
        n=n-1;
    }

    return 0;
}
