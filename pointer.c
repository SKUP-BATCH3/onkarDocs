#include<stdio.h>
int main()
{
int * ptr;
int z=50;
ptr=&z;
printf("%d\n",z);
printf("%d\n",ptr);
printf("%p\n",*ptr);
printf("%d\n",sizeof(*ptr));
printf("%d\n",sizeof(ptr));
}
