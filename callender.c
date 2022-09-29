#include<stdio.h>
int main()
{
int i,day,y=1;
printf("enter a number ");
scanf("%d",&day);

while(y<=day);
{
for (i=0;i<=7;i++)
{
if (y<=day)
printf("%d\t",y);
y++;
}
}
}
