#include<stdio.h>
int main()
{
    long long int a,b,sum,mul,sub;
    scanf("%lld%lld",&a,&b);
    sum=a+b;
    mul=a*b;
    sub=a-b;
    printf("%lld + %lld = %lld\n",a,b,sum);
    printf("%lld * %lld = %lld\n",a,b,mul);
    printf("%lld - %lld = %lld\n",a,b,sub);
    return 0;
}
