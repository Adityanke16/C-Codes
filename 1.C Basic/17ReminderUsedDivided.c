//Take two integers input , a and b : a>b, and find the remainder when a is divided by b.

#include <stdio.h>
int main ()
{
    int a,b;    // a>b ,  a = Dividend , b = Divisor 
    printf("Enter Dividend : ");
    scanf("%d",&a);
    printf("Enter Divisor : ");
    scanf("%d",&b);
    int q = a/b;     // q = Quotient
    int r = a - b*q;  //   [Reminder = Dividend - Divisor * Quotient]
    printf("The Reminder when %d is divided by %d is : %d",a,b,r);
    return 0;
} 