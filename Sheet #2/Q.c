#include<stdio.h>
int main()
{
    int n,i,j,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            printf("0\n");
            continue;
        }
        while(x>0)
        {
            y=x%10;
            x=x/10;
            printf("%d ",y);
        }
        
        printf("\n");
    }

    return 0;
}

