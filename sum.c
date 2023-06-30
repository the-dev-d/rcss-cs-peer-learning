#include <stdio.h>

int main() {

    int a,b,c, sum;
    scanf("%d%d%d", &a, &b, &c);
    sum = a+b;
    if(sum<20)
        sum+=c;
    printf("%d", sum);
    return 0;
}