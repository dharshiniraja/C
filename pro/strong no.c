#include<stdio.h>
int main()
{
    int n,fact=1,s=0,re=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        re=n%10;
        for(int i=1;i<=re;i++)
        {
            fact*=i;
        }
        s+=fact;
        n=n/10;
        fact=1;
    }
    if(s==temp)
    {
        printf("STRONG");
    }
    else
    {
        printf("NOT STRONG");
    }
   return 0; 
    
}

Input:
145
138
Output:
Strong(1!+4!+5!=145)
Not Strong(1!+3!+8! not equal to 138)
