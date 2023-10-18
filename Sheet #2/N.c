#include<stdio.h>
int main()
{
    int a,n,i,j;
    char s;
    scanf("%c",&s);
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        scanf("%d",&a);
        for(j=1;j<=a;j+=1)
        {
            printf("%c",s);
        }
        printf("\n");
    }

    return 0;
}
