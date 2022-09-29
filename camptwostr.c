#include<stdio.h>
void main(){
char c[]="string";
char d[7]="string";
char s[7];
int i=0;

while(i<sizeof(c)){
   s[i]==c[i];
   i++;
}
if(d==s)
{
   printf("the value is equal %s",d);

   }
   else {
    printf("the value is not equal ");
   }
}
