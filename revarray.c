#include<stdio.h>
int main()
{
int a, z;
printf("enter the array ");
scanf("%d",&z);
 int r[z];

for(int i=0;i<z;i++)
{
printf(" enter the value of array ");
scanf("%d",&r[i]);
}
for(int j=z-1;j>=0;j--)
{
 printf(" the value of array is %d\n ",r[j]);
}

}
