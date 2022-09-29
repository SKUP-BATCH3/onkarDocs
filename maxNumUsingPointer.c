#include<stdio.h>
void main(){
 int a,b,*ptr1,*ptr2;

 printf("Enter the Two Numbers : ");
 scanf("%d %d",&a,&b);
 ptr1 =&a;
 ptr2=&b;
 (*ptr1>*ptr2)? printf(" %d is maximum",*ptr1):
 printf(" %d is maximum",*ptr2);
}
