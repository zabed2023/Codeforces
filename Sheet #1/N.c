#include <stdio.h>

int main() {
    char X,asc;
    scanf("%c", &X);


     if (X >= 'A' && X <= 'Z') {
            asc=X+32;
        printf("%c\n",asc);
    } else if (X >= 'a' && X <= 'z') {
        asc=X-32;
        printf("%c\n",asc);
    }

    return 0;
}
