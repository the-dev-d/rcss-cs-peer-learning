// #include <stdio.h>
// int main()
// {
//     int a;

//     scanf("%d", &a);
//     if (a == 1){
//         printf("One");
//     }
//     else if (a == 2){
//         printf("Two");
//     }
//     else if (a == 3) {
//         printf("Three");
//     }
//     else if (a == 4) {
//         printf("Four");
//     }
//     else if (a==5) {
//         printf("Five");
//     }

//     return 0;
// }
// if(condition) {
//     statements
// }
// else {
//     statements
// }


#include<stdio.h>
int main() {

    int num;
    scanf("%d", &num);

    if(num == 0) {
        printf("Zero");
        return 0;
    }
    if(num%2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}