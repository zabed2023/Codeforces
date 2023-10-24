#include<stdio.h>
int main()
{
    int n,x,a,b,s,sum=0,mod,i;
    scanf("%d%d%d",&n,&a,&b);
    for(i=1;i<=n;i++)
    {
        x=i;
        s=0;

        while(x>0)
        {
            mod=x%10;
            s+=mod;
            x/=10;

        }
        if(a<=s && s<=b)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
