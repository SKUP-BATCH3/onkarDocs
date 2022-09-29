#include<stdio.h>
int main(){
int a,b;
printf("Enter the numbers :");
scanf("%d %d",&a,&b);

if((a<=30&&a>=1)&&(b<=30&&b>=1)){
if(a>b)
return a;
else
return b;
}
else{

printf("Enter The correct Number ");
}
}

