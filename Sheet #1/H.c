#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B;
    scanf("%lf %lf", &A, &B);
 
    double floorResult = floor(A / B);
    double ceilResult = ceil(A / B);
    double roundResult = round(A / B);
 
    printf("floor %.0lf / %.0lf = %.0lf\n", A, B, floorResult);
    printf("ceil %.0lf / %.0lf = %.0lf\n", A, B, ceilResult);
    printf("round %.0lf / %.0lf = %.0lf\n", A, B, roundResult);
 
    return 0;
}
