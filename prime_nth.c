#include<stdio.h>
int main()
{

 int i, n=10,z;
 a[10]={1,2,3,4,5,6,4,3,2,1};
 for (i=1;i<=n;i++)
 {
  z=0;
  for(int j=0;j<=i/2;j++)
  {
  if(i%j==0)
  {
  z++;
  }
  }
  if(z==0 && i!=1)
  printf("%d\n",i);
 }
}
