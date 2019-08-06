#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        int a,b,c;
        scanf("%d/%d/%d",&a,&b,&c);
        if(a>0 && a<32)
        {
            if(b>0 && b<13)
            {
                if(c>0)
                {
                    printf("VALID");
                }
                else
                {
                    printf("NOT VALID");
                }
            }
        }
        else
        {
            printf("NOT VALID");
        }
        n=n-1;
    }
    return 0;
}

Input:
24/4/2015
-12/4/2000
Output:
VALID
NOT VALID
