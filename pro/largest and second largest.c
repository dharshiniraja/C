#include<stdio.h>
#include<limits.h>
int main()
{
  int max=INT_MIN,max1=INT_MIN,input;
  chars ch;
  do
  {
    scanf("%d"&input);
    if(input==-1) break;
    if(max<input)
    {
      max1=max;
      max=input;
    }
    else if(max1<max && max1<input)
    max1=input;
    }while(1)
   printf("%d %d",max,max1);
   return 0;
 }
