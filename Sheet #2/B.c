#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int found = 0;
    for (int i = 2; i <= N; i += 2) {
        printf("%d\n", i);
        found = 1;
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
