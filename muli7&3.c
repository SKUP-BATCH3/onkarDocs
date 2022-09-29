#include<stdio.h>
int mul3(int a){
if(a%3==0)
return 1;

else
return 0;
}
int mul7(int a){
if(a%7==0)
return 1;

else
return 0;
}
void main(){

int a;
printf("Enter the number :");
scanf("%d",&a);

int s=mul3(a);
int p=mul7(a);

printf("the Number is multiple of 3=%d \n multiple of 7=%d",s,p);
}
