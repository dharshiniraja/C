#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=0,l=0;
    int a[n],e[k],o[l];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[k]=a[i];
            k++;
        }
        else
        {
            o[l]=a[i];
            l++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",e[i]);
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ",o[i]);
    }
    return 0;
}

Input:
7
12 34 45 9 8 90 3

Output:
12 34 8 90 45 9 3 
