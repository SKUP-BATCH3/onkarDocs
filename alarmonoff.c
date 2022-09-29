#include<stdio.h>
int main()
{
int day,v;

printf("Enter the todays day:\n");
printf("0 for sunday ,1 for monday,2 for tuesday,3 for wednesday,\nfor thursday,5 for friday, 6 for saturday :");
scanf("%d",&day);
printf("you need vacation press 1 :");
scanf("%d",&v);

switch(day){
case 0:if(day==0 && v==1){
printf("alarm off");}
break;
case 1:if(day==1 && v==0){
printf("7:00");}
else if(day==1 && v==1){
printf("10:00");
}
break;
case 2:if(day==2 && v==0){
printf("7:00");}
else if(day==2 && v==1){
printf("10:00");
}
break;
case 3:if(day==3 && v==0){
printf("7:00");}
else if(day==3 && v==1){
printf("10:00");
}
break;
case 4:if(day==4 && v==0){
printf("7:00");}
else if(day==4 && v==1){
printf("10:00");
}
break;
case 5:if(day==5 && v==0){
printf("7:00");}
else if(day==5 && v==1){
printf("10:00");
}
break;
case 6:if(day==6 && v==0){
printf("7:00");}
else if(day==6 && v==1){
printf("10:00");
}
break;
}
}
