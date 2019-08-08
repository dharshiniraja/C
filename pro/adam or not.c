#include<stdio.h>
int main()
{
    int n,r=0,t=0,s=0,sq=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        r=n%10;
        t=t*10+r;
        n=n/10;
    }
    s=temp*temp;
    sq=t*t;
    int re=0,te=0;
    while(s>0)
    {
        re=s%10;
        te=te*10+re;
        s=s/10;
    }
    if(te==sq)
    {
        printf("ADAM");
    }
    else
    {
        printf("NOT ADAM");
    }
    return 0;
}
Input:
12
Output:
ADAM
Explanation:
12,21(reverese of 12)
144(12^2),441(21^2)
441(reverse)==441
