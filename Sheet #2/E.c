#include<stdio.h>
int main()
{
    int a,i,max,x;
    scanf("%d",&a);
    max=0;
    for(i=1;i<=a;i++)
    {
        scanf("%d",&x);

        if(x>max)
        {
            max=x;
        }
    }
    printf("%d\n",max);


    return 0;
}
