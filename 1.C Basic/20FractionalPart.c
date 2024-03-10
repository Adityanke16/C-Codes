#include <stdio.h>
int main ()
{
    float x;
    printf("Enter a desimal number : ");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x-y;
    printf("Your Fractional part of the number is : %f",z);
    return 0;
}