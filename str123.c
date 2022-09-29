#include<stdio.h>
void main()
{
char str[10];
printf(" Enter the String :");
gets(str);
for(int i=0;i<=sizeof(str);i++){
if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
printf("%c",str[i]);
}
else{
    printf(" ");
}}
}
