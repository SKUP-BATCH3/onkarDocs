#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the number ");
 scanf("%d %d  %d",&a,&b,&c);

 if (a>b && a>c)
 {
  printf("a number is biggest ");
 }
 else if (b>c)
 {
  printf("b is the biggest ");
 }
 else
 {
  printf("c is the biggest");
  }
  return 0;

}
