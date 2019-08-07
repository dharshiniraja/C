
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        int a,flag=0;
        scanf("%d",&a);
        int temp;
        temp=a;
        while(temp!=0)
        {
            if(temp%2!=0)
            {
                flag=1;
                break;
            }
            temp=temp/2;
        }
        if(flag==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        n=n-1;
    }
    return 0;
}
