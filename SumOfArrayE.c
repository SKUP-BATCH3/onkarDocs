#include<stdio.h>
int main(){
int sum=0,*ptr;
int a[9]={1,2,3,4,5,6,7,8,9};
for(int i=0;i<=9;i++){
ptr=&a[i];
//printf("%d\t",ptr);
sum=sum+*ptr;
}
printf("%d",sum);
}
