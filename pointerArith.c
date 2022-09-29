#include<stdio.h>
void main()
{
int a[7] ={1,-1,0,2,3,5,4};
int *ptr=&a[0];
printf("%d\n",*ptr++);

int *ptr1=&a[0];
printf("%d\n",++*ptr1);

int *ptr2=&a[0];
printf("%d\n",*++ptr2);

int *ptr3=&a[0];
printf("%d\n",*(ptr3++));

int *ptr4=&a[0];
printf("%d",(*ptr4)++);
}
