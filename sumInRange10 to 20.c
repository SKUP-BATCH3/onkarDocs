#include<stdio.h>
int main()
{
 int a, b,c=30;
 printf("Enter the values :");
 scanf("%d %d",&a,&b);

 int sum=a+b;
 if(sum>=10&&sum<=20){
   return c;
 }
 else{
printf("%d",sum);
return sum;
 }
}
