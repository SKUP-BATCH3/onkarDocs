#include<stdio.h>
int main(){
int s,c,c1,c2,i;
printf("Enter The size of String :");
scanf("%d",&s);
char st[s];

for (i=0;i<s;i++){
//printf("Enter the string :");
scanf("%c",&st);
}
for(i=0;i<s;i++){
if(st[i]>='a'||st[i]<='z'){
c++;
}
else if(st[i]>='0'||st[i]<='9'){
c1++;
}
else{
 c2++;
}
}
printf("the characters is %d\n alphabates is %d\n speacial Characters %d",c,c1,c2);
}
