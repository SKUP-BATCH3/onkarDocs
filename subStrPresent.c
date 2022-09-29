#include<stdio.h>
void main()
{
int c=0,s=0;
char str[20];
char str1[3];
printf("Enter the 1st String :");
gets(str);
printf("Enter the 2nd String :");
gets(str1);
    for(int i=0,j=0;i<=20;i++,j++){
    if(str1[j]==str[i]){
    c++;}}
    //for(int s=0;s<=sizeof(str);s++){
    if(c==2){
    s++;}
    printf("%d",s);
}
