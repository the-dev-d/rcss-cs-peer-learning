//search and replace in a one dimesional static array
#include<stdio.h>
int main() {

    // _ _ _ _ _ _ _ _ _ _

    int a[10] = {4,7,8,3,5,7,34,5,8,56};
    int num;

    scanf("%d", &num);

    for(int i = 0; i <= 9; i++) {
        if(a[i] == num) {
            a[i] = 0;
        }
    }

    for(int i=0; i< 10; i++) 
        printf("%d,", a[i]);

}