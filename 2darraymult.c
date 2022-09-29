#include<stdio.h>
void main()
{
int a[2][3];
int i,j, mult=1;
for(i=0;i<=1;i++){

 for(j=0;j<=2;j++){
printf("Enter the value :");


 scanf("%d",&a[i][j]);

 mult=mult*a[i][j];
 }

 }
 printf("%d",mult);

}
