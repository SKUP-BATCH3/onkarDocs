#include<stdio.h>
divi5(int a,int b){
if(a==b){
 return 0;
}
if( (a%5==b%5)){
 if(a>b){
 printf("%d is larger No",a);
 return a;8
 }
 else
 printf("%d is larger No",b);
  return b;
}
}
void main(){
 int s=divi5(25,10);
}


