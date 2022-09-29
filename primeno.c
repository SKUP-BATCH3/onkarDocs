#include<stdio.h>
int main()
{
 int n=10,count;
        for(int i=1;i<=n;i++)
        {
            count=0;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count==0 && i!=1)
            printf("\t%d",i);


        }
}
