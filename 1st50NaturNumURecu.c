#include<stdio.h>
int printnum(int a){
int i=1;
if(a<=50){
printf("%d\n",a);
}
printnum(a+1);
}


int main(){
int a;
a=printnum(1);
printf("%d",a);
}
