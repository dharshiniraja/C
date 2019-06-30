#include <stdio.h>

int main() {
	int n;
	int c=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    for(int j=0;j<i;j++)
	    {
	        printf("%d*",c);
	        c++;
	    }
	    printf("\b \n");
	}
	return 0;
}


#include <stdio.h>

int main() {
	int n;
	int c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    for(int j=0;j<=i;j++)
	    {
         if(i==j)
	        printf("%3d\n",++c);
         else
           printF("%3d *,++c);
	     }
	    printf("\b \n");
	}
	return 0;
}

Input:
5
Output:
1
2*3
4*5*6
7*8*9*10
11*12*!3*14*15

