#include <stdio.h>

int main() {
    int n, i;
    int x;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            a[i] = 1;
        } else if (a[i] < 0) {
            a[i] = 2;
        } else if (a[i] == 0) {
            a[i] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" "); 
        }
    }

    return 0;
}
