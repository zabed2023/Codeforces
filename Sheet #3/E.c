#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int lowest = a[0];
    int p = 1;

    for (i = 0; i < n; i++) {
        if (a[i] < lowest) {
            lowest = a[i];
            p = 1 + i;
        }
    }

    printf("%d %d\n", lowest, p);

    return 0;
}
