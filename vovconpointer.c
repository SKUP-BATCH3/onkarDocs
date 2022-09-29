#include<stdio.h>
int main()
{
 char z[]="akshu is a smart boii";
int i,c=0,c1=0,*ptr1, *ptr2 ;
 for(i=0;i<sizeof(z);i++)
 {
 if (z[i]=='a'||z[i]=='e'|| z[i]=='i'|| z[i]=='o'|| z[i]=='u'){
 c++;
 }
 else{
c1++;
 }
 ptr1=&c;
 if(z[i]==' '){
c1--;
}
ptr2=&c1;
}
printf(" the vovels is %d\n the consonunt is %d",*ptr1,*ptr2-1);
}
