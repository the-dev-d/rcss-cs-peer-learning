//predict output

#include <stdio.h>
int main()
{

    int num;
    scanf("%d", &num);
   
    int i = 1;
    while(i <= num) {
        printf("Hello world %d \n", i);
        i+=2;
        i--;
    }
    return 0;
}

// do {
//     // statements
// }
// while(condition);