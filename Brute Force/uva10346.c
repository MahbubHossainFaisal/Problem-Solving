#include<stdio.h>

int main()
{
    int n,k,x,i,y,count,z;
    count=0;
    y=0;
        while(scanf("%d%d",&n,&k)!=EOF)
    {  for(i=1;i<=n;i++)
    {   count=count+n;
    if(y>=k)
        {
            y=y/3;
            count=count+n+y;
        }
if(n<k)
        {
            break;
        }
        n=n/k;
        x=n%k;
        y=y+x;



    }

    printf("%d",count);
    count=0;
    y=0;

    }
}
