#include <stdio.h>

int main() {
    int A, B, C,x,y,z;
    scanf("%d%d%d", &A, &B, &C); //3 -2 1
    x=A;
    y=B;
    z=C;

    // Sort the numbers in ascending order
    if (A > B) { //3>-2
        int temp = A; //temp=3
        A = B; //A=-2
        B = temp; //B=3
    }
    if (A > C) { //3>1
        int temp = A; //temp=3
        A = C; //A=1
        C = temp; //C=3
    }
    if (B > C) { 
        int temp = B;
        B = C;
        C = temp;
    }

    // Print the sorted numbers
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", A, B, C, x, y, z);

    return 0;
}
