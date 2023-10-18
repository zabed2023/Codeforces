#include<stdio.h>
int main()
{
    int n,i,x,max;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n && i<=x;i++)
    {
        if(n%i==0 && x%i==0)
        {
            //max=i;
           max=i;
        }
    }
    printf("%d\n",max);
    return 0;
}
