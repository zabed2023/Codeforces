#include <stdio.h>
int main()
{
    int i,x,n,r,sum=0;
    scanf("%d",&x);
    n=x;
    while(1)
    {
      r=n%10;
      n=n/10;
      sum+=r;
      if(n==0)
      {
          break;
      }
      sum*=10;
    }
    printf("%d\n",sum);
    if(sum==x)
    {

        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
