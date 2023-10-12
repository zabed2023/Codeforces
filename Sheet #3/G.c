#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j,flag;
    int x;



    scanf("%d", &n);
    int a[n];


    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

    }
    flag=1;
    i=0;
    j=n-1;

    for (i=0;i<=j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            printf("NO\n");
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }




    return 0;
}
