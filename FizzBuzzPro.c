#include<stdio.h>
int main()
{
int n;
printf(" enter the number :");
scanf("%d",&n);

if(n%3==0 && n%5==0){
printf("Fizz Buzz");
}
else if(n%3==0){
printf("Fizz");
}
else if(n%5==0){
printf("Buzz");
}
else{
printf("%d !",n);
}
}
