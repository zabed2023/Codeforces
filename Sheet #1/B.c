#include<stdio.h>
int main()
{
    int i;
    long long int l;
    char ch;
    float f;
    double d;
    scanf("%d %lld %c %f %lf",&i,&l,&ch,&f,&d);
    printf("%d\n",i);
    printf("%lld\n",l);
    printf("%c\n",ch);
    printf("%.2f\n",f);
    printf("%.1lf\n",d);
    return 0;
 
}
