#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    
    if(!num) {
        printf("zero");
        return 0;
    }
    
    if(!(num>>31)) {
        printf("positive");
    }
    else {
        printf("negative");
    }
    
    return 0;
}

/*

    1 000000000000000000...110 - -6
    0 000000000000000000...110 - 6
    
    000000000000000000000000001 - 1
    000000000000000000000000000 - 0
*/
