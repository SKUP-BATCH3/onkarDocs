#include<stdio.h>
void main()
{
int odd,num,sum;
printf("Enter the number :");
scanf("%d",&num);
for(int i=1;i<=num;i++){
if(i%2==1){
 odd=i;
sum=sum+odd;
 printf("%d\n",i);
}
}
printf("The sum of 1st odd n numbers is=%d\n",sum);

}
