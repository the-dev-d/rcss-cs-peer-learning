#include<stdio.h>
int main() 
{
    int a,b;
    printf("Enter the pin 1 : ");
    printf("Enter the pin 2 : ");

    scanf("%d%d",&a, &b);

    if(a==7777) {
        printf("Access granted\n"); 
    }
    else {
        printf("Access denied\n");
        printf("Get out\n");
    }
    return 0;
}
// if(condition) {
//     statements
// }
// else {
//     statements
// }

