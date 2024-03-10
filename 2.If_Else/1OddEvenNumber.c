#include <stdio.h>
int main ()
{
    int number;
    printf("Enter Any Number : ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("Even Number");
    }
    else       //if(number%2!=0)
    {
        printf("Odd Number");
    }
    return 0;
}