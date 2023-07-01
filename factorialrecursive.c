#include <stdio.h>
int factorial(int term) {
    if(term == 0) {
        return 1;
    }
    //statements
    return term * factorial(term - 1);
}
int main()
{
    int num, fact;
    printf("Enter a number to find factorial : ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial is %d", fact);
}


//input 567
//output 7-6-5-