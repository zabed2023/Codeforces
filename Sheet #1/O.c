#include <stdio.h>

int main() {
    int A, B;
    char S;

    
    scanf("%d%c%d", &A, &S, &B);

    
    int result = 0;

    
    switch (S) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
    }
    printf("%d\n", result);

    return 0;
}
