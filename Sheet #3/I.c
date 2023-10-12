#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j,flag,temp,q;
    int x;
    scanf("%d",&q);

    while(q--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        long long msum=a[0]+a[1]+1;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                long long sum=a[i]+a[j]+j-i;
                if(sum<msum)
                {
                    msum=sum;
                }
            }
        }
        printf("%lld\n",msum);
    }

    return 0;
}
