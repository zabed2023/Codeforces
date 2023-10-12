#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int year=x/365;
    x=x%365;
    int month=x/30;
    x=x%30;
    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",x);


    return 0;
}
