#include<stdio.h>
int main()
{
 int b,d;
 printf("enter the number ");
 scanf("%d",&b);

 for (int i=0;i<4;i++)
 {
  d=b%2;
  b=b/2;
  printf("%d",d);
  }

 printf("%d",d);
  }
