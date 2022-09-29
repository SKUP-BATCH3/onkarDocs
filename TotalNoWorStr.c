#include<stdio.h>
void main(){
char s[]="hello world hay how are you";
int c=1;
for(int i=0;i<sizeof(s);i++){
if(s[i]== ' '){
c++;
}}
printf("the numbers of words %d",c);
}
