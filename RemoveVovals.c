#include<stdio.h>
int main()
{
char z[] = "aniket is nice guy";

for(int i=0;i<sizeof(z);i++)
{
if(z[i]=='a'||z[i]=='e'|| z[i]=='i'|| z[i]=='o'|| z[i]=='u'){
z[i]=' ';

printf("%c",z[i]);
 }
}
}
