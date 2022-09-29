#include<stdio.h>
int main()
{
char st[5];
printf("Enter the string :");
gets(st);
//int s=sizeof(st)-1;
if(st[0]=='f' && st[4]=='b'){
printf("Fizz Buzz");
}
else if(st[0]=='f'){
printf("Fizz");
}
else if(st[4]=='b'){
printf("Buzz");
}
else{
printf("string Unchanged");
}
}
