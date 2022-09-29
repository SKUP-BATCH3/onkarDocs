#include<stdio.h>
void main()
{
int count,num,i;
printf("Enter the number :");
scanf("%d",&num);
for(i=1;i<=num;i++){

   count=0;

for(int j=2;j<=i/2;j++)
{
   if(i%j==0)
   {
   count++;
   }
}
 if(count==0 && i!=1)
    printf("%d\n",i);

}
}
