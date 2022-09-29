#include<stdio.h>
int sumofdigit(int n){
int s,sum=0;
for(int i=0;i<=n+1;i++){
s=n%10;
n=n/10;
sum=sum+s;
}
return sum;
return sumofdigit(n);
}
int main(){
int a,f;
scanf(" %d",&a);

f=sumofdigit(a);
printf("%d",f);
}
