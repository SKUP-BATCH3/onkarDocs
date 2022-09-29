#include<stdio.h>
void main(){
 int a,i,*ptr,s,fact=1;
 printf("Enter the number :");
 scanf("%d",&s);
 for(int i=1;i<=s;i++){
 fact=fact*i;

 }
 ptr=&fact;

 printf("%d", *ptr);
}
