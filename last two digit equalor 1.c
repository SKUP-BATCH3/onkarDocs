#include<stdio.h>
int main()
{
 int a, b,c,d,e=0;
 printf("Enter the values :");
 scanf("%d %d",&a,&b);

 for(int i=0;i<1;i++){
  c=a%10;
  a=a/10;

   d=b%10;
   b=b/10;

   if(c==d){
   e++;
   }
   }
   if(e==1){
   printf("The last two digit is equal");
   }
   else{
   printf("The last two digit is not equal");
   }
 }
