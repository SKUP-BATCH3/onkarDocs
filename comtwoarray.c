#include<stdio.h>
int comp2(int a[],int b[])
{
if(a[0]==b[0] && a[8]==b[8])
{
  printf("true ");
}
else
{
printf("false");
}
}
int main()
{
int a[]={1,2,3,4,5,6,1,2,1};
int b[]={1,2,5,6,5,5,4,12,1};
comp2(a,b);



}

