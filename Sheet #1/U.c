#include <stdio.h>

int main() {
    double num;
    scanf("%lf", &num);

    if (num == (int)num) {
        printf("int %.0lf\n", num);
    } else {
        int integerPart = (int)num;
        double decimalPart = num - integerPart;
        printf("float %d %.3lf\n", integerPart, decimalPart);
    }

    return 0;
}
