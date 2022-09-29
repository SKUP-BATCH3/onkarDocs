#include<stdio.h>
void main(){
char c[]="string1";
char d[7];
int i=0;

while(i<sizeof(c)){
   d[i]=c[i];
   i++;
}
printf("%s",d);
}
