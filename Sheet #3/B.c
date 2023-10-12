#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    long long x;



    scanf("%d", &n);
    long long a[n];


    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);

    }
    int found=-1;
    scanf("%lld",&x);
    for(i=0;i<n;i++)
    {

        if(a[i]==x)
        {
            found=i;
            break;
        }
    }
     printf("%d\n",found);


    return 0;
}
