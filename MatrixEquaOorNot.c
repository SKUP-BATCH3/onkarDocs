#include<stdio.h>
int main()
{
int i,j,s,l,l1,z;

printf("Enter the value of array :");
scanf("%d %d",&l,&l1);
int a[l][l1];
int b[l][l1];
for(i=0;i<l;i++){
for(j=0;j<l1;j++){
printf("Enter the value :");
scanf("%d",&z);
a[i][j]=z;

}
}

printf("the values is %d %d :",);
for(i=0;i<l;i++){
for(j=0;j<l1;j++){
printf("Enter the value :");
scanf("%d",&s);
b[i][j]=s;
}
}
if(a==b){
    printf("both matrix is equal");
}
else{
     printf("both matrix is not equal");
}
}
