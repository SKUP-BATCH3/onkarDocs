#include<stdio.h>
int main()
{
int a,b;
printf("enter the two number ");
scanf("%d %d",&a,&b);

if (a==b) {
return 0;
}
if(a%5==b%5)
{
if (a>b) {
printf("%d is larger number",a);
return a;
}
else{
printf("%d is larger number",b);
return b;
}
}

}
