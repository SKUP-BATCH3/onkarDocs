#include<stdio.h>
void main()
{
int pr,a,i=1;
printf("Enter the number :");
scanf("%d",&a);
while(i<a){
if(a%i==0){
  pr++;
}
 i++;
}
if(pr==1){
printf("prime number");
}
else{
printf("not a prime number");
}
}
