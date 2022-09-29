#include<stdio.h>
void main()
{
int num,sum,avg;
for(int i=1;i<=10;i++){
printf("Enter the numbers :");
scanf("%d",&num);

sum=sum+num;
}
avg=sum/10;

printf(" the sum is =%d and\n avgerage is =%d",sum,avg);
}

