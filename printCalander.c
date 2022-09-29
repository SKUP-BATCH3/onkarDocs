#include<stdio.h>
void main()
{int d1,d2,i,j;
printf("Enter the No of Days :");
scanf("%d",&d1);
int c=1;

while(c<=d1){

for(int j=0;j<7;j++){
if(c<=d1)
printf("\t%d",c);
c++;

}
printf("\n");
}
}
