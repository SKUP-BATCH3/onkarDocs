#include<stdio.h>
int main()
{
int p,c,m;

 printf(" enter the value of p,c,m :");
 scanf("%d\n %d\n %d",&p,&c,&m);

 int a=(p+c+m);
 int b=(m+p);


 if (m>=65 && p>=55 && c>=50 && a>=190 || b>=140)
 {
 printf(" admission accepted ");
 }
 else {
 printf("admission declined ");
 }
}
