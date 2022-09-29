#include<stdio.h>
void main()
{
int c=0;
char str []="thewOrdisCORRECT";
char s[30];
char st[30];

int l=strlen(str);
for(int i=0;i<l;i++){
    if(str[i]>='a' & str[i]<='z')
        s[i]=str[i];
}
for(int j=0;j<l;j++){
    if(str[j]>='A'& str[j]<='Z')
        st[j]=str[j];
}
        printf("%s",strlwr(st));
//printf("%s",str1);
}

//printf("Enter the 2nd String :");
//gets(str2);

//printf("%s\n",strlwr(str1));
//printf("%s",strupr(str2));


