#include<stdio.h>
void main()
{
int prime,num,sum,count;
printf("Enter the number :");
scanf("%d",&num);
for(int i=2;i<=num;i++){
if(i%1==0){
count++;
if(count==1){
prime==i;
}
printf("%d",prime);
}
}
}

