#include<stdio.h>
int main()
{
 int i, num;
 printf("enter the number ");
 scanf("%d",&num);

 for (i=1;i<=10;i++)
 {
   int tab=num*i;
    printf("%d X %d=%d\n",num,i,tab);
 }
}
