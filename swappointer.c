#include<stdio.h>
int swaping(int *,int *);
int main(){
int  a=5, b=4;
swaping(&a,&b);
 }
 int swaping(int *a, int *b)
 {
  *a=*a+*b;
  *b=*a-*b;
  *a=*a-*b;
  printf("%d %d",*a,*b);
 }
