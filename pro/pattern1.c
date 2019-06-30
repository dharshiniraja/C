#include <stdio.h>

int main()
{
    int row,count=1;
    
    scanf("%d",&row);
    for(int i=1;i<=row+1;i++)
    {
        
        for(int j=1;j<=row;j++)
        {
            if(j==row-1 && i>1)
            {
                printf("%d",count);
                count++;
            }
            else
            {
                printf("%d",row);
            }
        }
        printf("\n");
            
    }
    return 0;
}

Input:
3
Output:
3 3 3
3 1 3
3 2 3
3 3 3
