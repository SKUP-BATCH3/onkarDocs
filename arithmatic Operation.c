#include<stdio.h>
int add(int a,int b){
return a+b;
}
int sub(int a,int b){
return a-b;
}
int multi(int a,int b){
return a*b;
}
int div(int a,int b){
return a/b;
}
void main()
{
int a,b,s,p,q,r;
printf("Enter the numbers :");
scanf("%d %d",&a,&b);
s=add(a,b);
p=sub(a,b);
q=multi(a,b);
r=div(a,b);

printf("the arithmatic operation is\n sum=%d\n sub=%d\n mul=%d\n div=%d",s,p,q,r);
}
