#include<stdio.h>
int return5(int a, int b)
{
  return ((a+b)==5 ||(a-b)==5 || a==5 || b==5 );
   }

int main(){
    int a,b;
   scanf("%d %d",&a,&b);

printf("%d",return5(a,b));
}
