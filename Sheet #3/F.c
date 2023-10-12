#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    int x;



    scanf("%d", &n);
    int a[n];


    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

    }

    for (i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            printf("%d", a[i]);
        } else {
            printf(" %d", a[i]);
        }
    }




    return 0;
}
