#include<stdio.h>
void main()
{

FILE *fp;
fp=fopen("C:/Users/User/Desktop/aniket/APP.txt","r");
char ch[1000];
while(!feof(fp))
{


fgets(ch,2,fp);
printf("%s",ch);
}

fclose(fp);
}
