#include <stdio.h>


int main() {
    int n,i,j,flag,temp,q;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }

    }
    int count=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==min)
            {
                count++;
            }

        }
        if(count%2==0)
        {
            printf("Unlucky\n");
        }
        else
        {
            printf("Lucky\n");
        }

    return 0;
}
