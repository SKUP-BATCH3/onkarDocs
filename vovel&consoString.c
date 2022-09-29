#include<stdio.h>
int main()
{
 char z[]="akshu is a smart boii";
int i,c=0,c1=0;
 for(i=0;i<sizeof(z);i++)
 {
 if (z[i]=='a'||z[i]=='e'|| z[i]=='i'|| z[i]=='o'|| z[i]=='u'){
 c++;
 }
 else
    {
  c1++;
 }
 if (z[i]==' '){
    c1--;
 }

 }
printf(" the vovels is %d\n the consonunt is %d",c,c1-1);
}
