#include <stdio.h>
int main() {

    int a,b;
    scanf("%d%d", &a,&b);
    if(a-b)
        printf("not same");
    else
        printf("same");
    return 0;
}