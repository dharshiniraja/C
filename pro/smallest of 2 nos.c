#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        int n1,n2,n3;
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1<n2)
        {
            if(n1<n3)
            {
                printf("Smallest of %d,%d,%d is %d",n1,n2,n3,n1);
            }
            else
            {
                printf("Smallest of %d,%d,%d is %d",n1,n2,n3,n3);
            }
        }
        else if(n2<n3)
        {
            printf("Smallest of %d,%d,%d is %d",n1,n2,n3,n2);
        }
        else
        {
            printf("Smallest of %d,%d,%d is %d",n1,n2,n3,n3);
        }
        n=n-1;
    }
    return 0;
}
