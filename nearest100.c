#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the two number ");
 scanf("%d %d",&a,&b);

 if (a==b){
return 0;
 }
else if (a>0 && a<=100 && a>b)
{
printf(" a is near to 100");
return 1;
}
else if(b>0 && b<=100 && b>a)
{
printf(" b is near to 100");
return 1;
}
else{
printf("Enter the correct Numbers");
}
}
