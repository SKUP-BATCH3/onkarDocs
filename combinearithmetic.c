#include<stdio.h>
int add(int a, int b){
int z=a+b;
return z;
}
int sub(int a, int b){
int x=a-b;
return x;
}
int mul(int a, int b){
int y=a*b;
return y;
}
int divi(int a, int b){
int w=a/b;
return w;
}
int main()
{
    int a=5, b=3,p,q,r,s;
 p=add(a,b);
 q=sub(a,b);
 r=mul(a,b);
 s=divi(a,b);

 printf("enter the arithmetic opration sum=%d\n sub=%d\n mul=%d\n divi=%d",p,q,r,s);
 }

