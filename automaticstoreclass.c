#include<stdio.h>
 int a=5;
int main()
{
auto int x=10;
{
auto int x=20;
printf("%d",x);
}
printf("%d",x);
}
