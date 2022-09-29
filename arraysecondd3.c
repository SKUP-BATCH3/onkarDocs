#include<stdio.h>
int main()
{
 int r,c,e;
 printf("enter the number ");
 scanf("%d %d",&r,&c);
 int a[r][c];
 for(int i=0;i<r;i++)
 {
 for (int j=0;j<c;j++)
 {
 printf("\t");
 scanf("%d",&e);
 a[i][j]=e;
 }
 }
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 {
 printf("%d",a[i][j]);
 }
 }
}
