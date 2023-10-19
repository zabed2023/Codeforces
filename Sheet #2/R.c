#include<stdio.h>
int main()
{
    int n,i,j,x,y;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x<=0 || y<=0)
        {
            break;
        }
        if(y>x)
        {
            int sum=0;
            for(i=x;i<=y;i++)
            {
                sum=sum+i;
                if(i==y)
                {
                    printf("%d sum =%d\n",i,sum);
                }
                else
                {
                    printf("%d ",i);
                }
            }
        }
        else
        {
            int sum=0;
            for(i=y;i<=x;i++)
            {
                sum=sum+i;
                if(i==x)
                {
                    printf("%d sum =%d\n",i,sum);
                }
                else
                {
                    printf("%d ",i);
                }
            }
        }
    }

    return 0;
}

