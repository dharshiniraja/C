#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int k=0;
    char n[1000];   
    scanf("%[^\n]*%s",&n);
    k=strlen(n);
    for(int i=0;i<k;i++)
    {
        if(n[i]!='a' && n[i]!='e' && n[i]!='i' && n[i]!='o' && n[i]!='u' )
        {
           printf("%c",n[i]); 
        }
    }
    return 0;
}

Input:
hello
Output:
hllo
