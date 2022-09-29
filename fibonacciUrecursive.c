#include<stdio.h>
int fibonacci(int a){
int f=0;
for(int i=0;i<a;i++){
f=fibonacci(a);
return f;
a=a-1;
}}
int main(){
int s,a=10;
s=fibonacci(a);
printf("%d\n",s);
}
