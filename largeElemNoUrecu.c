#include<stdio.h>
int largefarray(int a[]){

for(int i=0;i<10;i++){

if(a[i]>a[i+1]){
//printf("%d\n",a[i]);
return a[i];
a[i]=largefarray(a);
}
}
}

void main(){
int a [10]={1,2,3,4,5,6,7,8,9,0};
int s=largefarray(a);
printf("%d",s);
}
