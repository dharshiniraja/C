#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int sum=0,d=0,f=0,s,q;
    double r;
    sum=(a[0]+a[n-1]);
    r=((double)sum)/2;
    for(int i=0;i<n;i++)
    {
        if(r<a[i])
        {
            d=a[i]-r;
            s=a[i];
            f=r-a[i-1];
            q=a[i-1];
            break;
        }
    }
    if(f>d)
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",q);
    }
    return 0;
}


Input:
8
10 8 5 6 25 30 16 21

Output:
16

Explanation:
we should take the average of maximum and minimum number in the array that is in this((5+30)/2=17.5)
and we should the number in the array which has the least difference with 17.5 so the ans is 16(17.5-16=1.5 which is the least)
