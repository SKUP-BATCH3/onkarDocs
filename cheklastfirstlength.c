#include<stdio.h>
int comp(int a[],int b)
{
int s=b/4;
if(a[0]==a[b]){
printf("true ");
}
else
{
printf("false");
}}
int main()
{
int a[]={1,2,3,4,5,6,1,2,1};
comp(a,sizeof(a));
}

