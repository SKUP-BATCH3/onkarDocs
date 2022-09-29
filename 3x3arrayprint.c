#include<stdio.h>
int  main()
{
 int r,c,e;
 printf("enter the number of row &column");
 scanf("%d%d",&r,&c);
 int a[r][c];
 printf("enter element for array \n");
 for (int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  {
  printf("\t");
  scanf("%d",&e);
  a[i][j]=e;
  }
  }
  printf("the two dimention array is : ");
  for(int i=0;i<r;i++)
{
for(int j=0;i<c;j++){
printf("%d",a[i][j]);
printf("\n");
}
}
  }


