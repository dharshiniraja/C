#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=0;
    int a[n],e[k],o[l];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        max=a[i+1];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        a[i]=max;
    }
    for(int i=0;i<n;i++)
    {
        if(i<n-2)
        { 
            printf("%d ",a[i]);
        }
        else if(i==n-1)
        {
            printf("%d -1",a[n-1]);
        }
    }
    return 0;
}

Input:
18
26 75 37 29 8 -67 31 42 72 57 -89 45 32 61 -64 25 48 -94

Output:
75 72 72 72 72 72 72 72 61 61 61 61 61 48 48 48 -94 -1
