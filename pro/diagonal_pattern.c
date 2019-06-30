#include<stdio.h>
int main()
{
   char str[100];
   int i,len;
   scanf("%s",str);
   len=strlen(str);
   for(int i=0;i<len;i++)
     printf("%-*.*s%*s\n",len,len-i,str,len,str+i);
   for(int i=0;i<len;i++)
     printf("%-*.*s%*s\n",len,i+1,str,len,str+len-i-1);
   return 0;
}
