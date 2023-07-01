#include <stdio.h>
float divideProperly(float a, float b) {
    float q;
    if(b==0){
        printf("Zero is not valid");
        return  0;
    }
    q = a / b;
    return q;
}
int main()
{
    float a,b, q;
    printf("Enter 2 numbers : ");
    scanf("%f%f", &a, &b);
    q = divideProperly(a,b);
    printf("%f", q);
    return 0;
}


//input 567
//output 7-6-5-