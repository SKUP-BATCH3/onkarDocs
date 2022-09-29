#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the two number ");
 scanf("%d%d",&a,&b);

if (a>0 && a<=100 && b<a)
{
printf("a value is near to 100");
}
else if(b>0 && b<=100 && a<b)
{
printf("b value is near to 100 ");
}
else if (a==b){
return 0;
}
else {
printf("Entered value is  wrong");
}
}
