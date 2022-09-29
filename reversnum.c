#include<stdio.h>
void main()
{
int num,rev;
printf("Enter the number :");
scanf("%d",&num);
for(int i=0;(i<=num-1);i++){
rev=num%10;
num=num/10;

printf("%d",rev);
}
}
