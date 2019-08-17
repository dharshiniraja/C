#include<stdio.h>
int fib(int n)
{
  if(n<=1)
  {
    return  n;
   }
   return fib(n+1)+fib(n+2);
}


int main()
{
  int n;
  scanf("%d",&n);
  fi=fib(n);
  printf("%d",fi);
 }
 
 
 Input:
 6
 Output:
 8
