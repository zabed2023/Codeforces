#include<stdio.h>
int main()
{
    long long int n,m,ld,ld1,sum;
    scanf("%lld%lld",&n,&m);
    ld=n%10;
    ld1=m%10;
    sum=ld+ld1;
    printf("%lld",sum);
    return 0;
}
