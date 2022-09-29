#include<stdio.h>
int square(){
int a=5,s=0,b=7,sw=0;
 sw=b;
    b=a;
    a=sw;
    s=printf("%d %d",a,b);

 return s;
}
int main()
{
printf("%d\n",square());

}
