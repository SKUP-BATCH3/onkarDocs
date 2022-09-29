#include<stdio.h>
void main()
{
 int a[10]={4,8,5,9,5,4,3,8,2,1};
 int count=0;

 for(int i=0;i<10;i++)
 {
 if (a[i]==a[i++]){
     count++;
     printf("%d",count);
}
 }

}
