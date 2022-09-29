#include<stdio.h>
int main()
{
char a[5]="nkukk";
int c=0,i;
char s,j;

for (i=0;i<5;i++)
{
    s=a[i];
if ( s==a[i+1]){
    printf("%c",s);
c++;
}
}
printf("%d",c);
}

