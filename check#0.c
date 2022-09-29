#include<stdio.h>
int main()
{
int num1,num2,res;
printf("Enter the numbers :");
scanf("%d %d",&num1,&num2);
res=num1+num2;
if(num1==30||num2==30){
int s=printf("True");
return s;
}
else if(res==30){
    int p=printf("True");
return p;
}
else{

    int t=printf("False");
return t;
}
}

