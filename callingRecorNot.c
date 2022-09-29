#include<stdio.h>
int main()
{
int d,ring=0,sleep,mcall,mor=1;
printf("Phone is ringing Enter mcall(1,2) and sleeep (1,0)");
scanf("%d %d",&mcall,&sleep);

if(sleep ==1 && mor==1 && mcall==2 && ring ==0){
printf("moms call received");
}
else if(sleep==1 && ring==0 && mor==1){
printf("call is not recived");
}
else{
  printf(" all call is recived");
}
}
