#include<stdio.h>
int main()
{
 char b[5],s;
 int i;
 printf("enter the value ");
 for(int i=0;i<5;i++){
 scanf("%c",&b[i]);
}
printf("The Entered Character is ");
for(int j=0;j<5;j++){
    printf("%c",b[j]);
}
}
