#include <stdio.h>
int main()
{

    int num;
    scanf("%d", &num);
   
    int i = 0;
    do {
        printf("Hello world %d \n", i);
        i++;
    }
    while(i <= num);
    return 0;
}
