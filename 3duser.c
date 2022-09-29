#include<stdio.h>
int main(){
int i,j,k,x,y,z;
printf(" enter the value ");
scanf("%d %d %d ",&x,&y,&z);

int s[x][y][z];
for (i=0;i<x;i++){
for(j=0;j<y;j++){
for (k=0;k<z;k++){
scanf("%d",&s[i][j][k]);
}}}
for (i=0;i<x;i++){
for(j=0;j<y;j++){
for(k=0;k<z;k++){
printf("%d ",s[i][j][k]);
}}}}
