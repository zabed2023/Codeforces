#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int firstDigit = X / 1000;

    if (firstDigit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
