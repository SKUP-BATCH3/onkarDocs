#include<stdio.h>
int main()
{
int i,s;
 int a[5]={10,5,7,9,8};
 for (i=0;i<=5;i++){
 if(a[i]<a[++i]){
      s=a[i];
    printf("%d",s);
 }
    else
     s=a[++i];

 }


 /*else{
  printf("%d\n",a[i++]);
 }*/
}


