#include<stdio.h>
int main()
{
int n,d1,d2;
printf(" enter the 1st dice value :");
scanf("%d",&d1);
printf(" enter the 2nd dice value :");
scanf("%d",&d2);

if(d1==6)
d1=1;
if(d2==6)
d2=1;
if(d1==d2){
d1++;
}

if(d1<=5 || d2<=5){
printf("%d",d1+d2);
}
else{
printf("Enter correct number");
}
}
