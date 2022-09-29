#include<stdio.h>
int main()
{
int s;
printf(" enter the speed ");
scanf(" %d",&s);

if(s<=60){
printf(" no tiket ");
 return 0;

}
else if(s>=61 && s<=80){
printf(" small tiket ");
return 1;

}
else {
printf(" large tiket ");
return 2;

}
}
