#include<stdio.h>
int square(){
int a=5,b=7,sw=0;
    a=b+a;
    b=a-b;
    a=a-b;
//printf("%d %d",a,b);

 return printf("%d",a,b);
}
int main() {
    int res;
res=square();
printf("%d",res);

}
