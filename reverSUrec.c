#include<stdio.h>
int reversStr( char s[],int size){
for(int i=size;i>=0;i--){
printf("%c",s[i]);
}
return reversStr;
}
int main(){
char s[]="anku";
reversStr(s,4);
}
