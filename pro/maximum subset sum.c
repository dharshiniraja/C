#include <stdio.h>
int maxsum(int *a,int n)
{
    int max=0,sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>max)
        {
            max=sum;
        }
        else if(sum<1)
        {
            sum=0;
        }
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",maxsum(a,n));
    return 0;
}


Input:
6
6 5 0 -1 3 -2

Output:
13
