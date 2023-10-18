#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0,cnt,dgt,temp,i;
    for(i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
            {
                cnt=0;
                dgt=temp%10;
                temp=temp/10;
                if(dgt!=7 && dgt!=4)
                {
                    cnt=1;
                    break;
                }
            }
            if(cnt==0)
            {
                printf("%d ",i);
                c++;
            }
    }
    if(c==0)
    {
        printf("-1");
    }
    return 0;
}
