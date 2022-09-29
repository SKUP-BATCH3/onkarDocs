#include<stdio.h>
int  main()
{
 int s;
 int z;
 int count,i,j,x;

 printf("enter the value of array  ");
 scanf("%d",&s);
 int a[s];

 for (i=0;i<s;i++){
 printf("enter the value ");
 scanf("%d",&a[i]);

}

for(j=0;j<s;j++){

printf("%d\n",a[j]);

}
printf("the size of array %d",sizeof(a));

}
