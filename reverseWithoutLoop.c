#include<stdio.h>

void printReverse(int num) {
    if(num==0)
        return;
    printf("%d", num%10);
    printReverse(num/10);
}
int main() {

    int num;
    scanf("%d", &num);
    printReverse(num);
    return 0;
}