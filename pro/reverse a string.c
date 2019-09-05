#include<stdio.h>
#include<string.h>
int main()
{
  char n[100000];
  scanf("%[^\n]",&n);
  int l=strlen(n);
  for(int i=l-1;i>=0;i--)
  {
    printf("%c",n[i]);
  }
  return 0;
}

Input:
I like you.
Output:
>uoy ekil I
