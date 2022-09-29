#include<stdio.h>
int main(){
int i,j,k;
int s[2][2][2]={8,9,0,4,5,6,7,10};
for (i=0;i<=1;i++){
for(j=0;j<=1;j++){
for(k=0;k<=1;k++)
printf("%d  ",s[i][j][k]);
}}}
