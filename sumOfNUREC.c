#include<stdio.h>
int sumOfn(int n){
int s=0;
if(n==0)
return n;
s=n+sumOfn(n-1);
return s;
}
int main(){
int a;
a=sumOfn(10);
printf("%d",a);
}
