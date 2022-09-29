#include<stdio.h>
void main()
{
int pr=0,a,i=1,j=2;
printf("Enter the number :");
scanf("%d",&i);
while(i<a){
while(j<=(i/2)){
if(i%j==0){
  pr++;
}
}
}
i++;
if(pr==1){
printf("prime number");
}
else{
printf("not a prime number");
}
}
