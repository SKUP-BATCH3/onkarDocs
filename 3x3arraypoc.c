#include<stdio.h>
int main()
{
int i,j,s,l,l1;
int a[3][3];
printf("Enter the value of array :");
scanf("%d %d",&l,&l1);
for(i=0;i<l;i++){
for(j=0;j<l1;j++){
printf("Enter the value :");
scanf("%d",&s);
a[i][j]=s;

}
}
printf("the values is :");
for(i=0;i<l;i++){
for(j=0;j<l1;j++){

printf("%d\n",a[i][j]);
}
}
}
