#include <stdio.h>

int main() {
    int a,b,c=0,r=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;++i)
    {
        for(int j=1;j<=i;++j)
        {
            if(i%j==0)
            {
                ++c;
            }
        }
        if(c%2!=0)
        {
            ++r;
        }
        c=0;
    }
    printf("%d",r);
	return 0;
}
