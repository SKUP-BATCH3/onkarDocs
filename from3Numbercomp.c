#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter the two number ");
scanf("%d %d %d",&a,&b,&c);

if(a==b || a==c || b==c)
return c;
else{
return 0;
}
}
