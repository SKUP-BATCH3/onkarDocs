#include<stdio.h>
void main()
{
int num1,num2,res;
printf("Enter the numbers :");
scanf("%d %d",&num1,&num2);
if(num1==num2){
int res1=(num1+num2);
res=res1*res1*res1;
}
else{
 res=(num1+num2);
}
printf("The Result is : %d",res);
}
