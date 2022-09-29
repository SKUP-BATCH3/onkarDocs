#include<stdio.h>
void main()
{
int a[2][3];
int i,j, sum ;
for(i=0;i<=1;i++){

 for(j=0;j<=2;j++){
printf("Enter the value :");


 scanf("%d",&a[i][j]);

 sum=sum*a[i][j];
 }

 }
 printf("%d",sum);

}
