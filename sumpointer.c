#include<stdio.h>
int main()
{
int * ptr,*ptr1;
int z,x;
ptr=&z;
ptr1=&x;

printf("enter two values ");
scanf("%d %d",&z,&x);

printf("%d %d\n",z,x);
printf("%d\n",ptr);
printf("%d\n",ptr1);
int sum=*ptr+(*ptr1);
printf("%d",sum);



}
