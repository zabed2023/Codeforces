#include<stdio.h>
int main()
{
    int n,i,x,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&x);
      long long fac=1;
      for(j=1;j<=x;j++)
      {
          fac*=j;

      }
      printf("%lld\n",fac);
    }

    return 0;
}
