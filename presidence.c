#include<stdio.h>
int main()  
{
    int a =2, b = 3;
    a  = a++ + ++b;
    printf("a = %d\n b=%d\n", a,b);
}
