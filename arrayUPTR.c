#include<stdio.h>
void main(){
 int a,b,*ptr1,i,s;
 printf("Enter the size of array :");
 scanf("%d",&s);
 int st[s];

for(i=0;i<s;i++){
printf("Enter the Elements for array :");
scanf("%d",&a);
st[i]=a;
}

printf("the Entered numbers is :");
for(i=0;i<s;i++){
printf("%d\n", st[i]);
}
//printf("%d",*ptr1);
}


