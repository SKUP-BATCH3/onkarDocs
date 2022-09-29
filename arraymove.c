#include<stdio.h>
void main()
{
 int a[5]={11,22,33,44,55};
 int b[0];
 int s;

 for (int i=0;i<5;i++)
 {

    s=b[i]=a[i];
    printf("%d\n",s);
 }
}
