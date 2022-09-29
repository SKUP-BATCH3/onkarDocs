#include<stdio.h>
int main(){

int a,b,c;

printf("Enter the 3 Numbers :");
scanf("%d %d %d",&a,&b,&c);

if((b>a && c>b)||(b==a && a==c))
{
printf("True");
}
else{
    printf("Equal ok");
}
}
