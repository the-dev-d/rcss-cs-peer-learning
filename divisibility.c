#include <stdio.h>

int main() {

    int a,b;
    scanf("%d%d", &a, &b);
    if(!(a%b))
        printf("divisible");
    else
        printf("not divisible");
    return 0;
}