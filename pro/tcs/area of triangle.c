#include<stdio.h>
#include<math.h>
int main(){
  double a,b,c;
  scanf("%lf %lf %lf",&a,&b,&c);
  double p=0,s=0;
  p=(a+b+c)/2;
  s=sqrt(p*(p-a)*(p-b)*(p-c));
  print("%.2lf",s);
  return 0;
  }
  
  
  Input:
  2 3 4
  
  Output:
  2.90
  
