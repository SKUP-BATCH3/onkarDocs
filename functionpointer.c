#include<stdio.h>
int sum(int a, int b){
int sum = a+b;
//printf("%d",sum);
}

int sub(int a, int b){
int sub = a-b;
//printf("%d",sub);
}

int mult(int a, int b){
int mult = a*b;
//printf("%d",mult);
}

int (*ptr)(int , int);
int (*ptr1)(int, int);
int (*ptr2)(int, int);
int main()
{

int a=5, b=6, res=0, res1=0, res2=0;
int (*ptr)(int, int)=&sum;
int (*ptr1)(int, int)=&sub;
int (*ptr2)(int, int)=&mult;

res=(*ptr)(5,6);
res1=(*ptr1)(5,6);
res2=(*ptr2)(5,6);
printf("%d\n %d\n %d",res,res1,res2);
}
