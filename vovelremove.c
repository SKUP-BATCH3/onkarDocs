#include<stdio.h>
int main()`
{
 char z[]="akshu is a smart boii";
int i,c=0,c1=0;
 for(i=0;i<sizeof(z); i++)
 {
 if (z[i]=='a'||z[i]=='e'|| z[i]=='i'|| z[i]=='o'|| z[i]=='u'){
 z[i]=' ';
 }
 }
printf(" %s ",z);
 }
