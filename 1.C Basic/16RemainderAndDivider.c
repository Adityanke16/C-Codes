//Take two integers input , a and b : a>b, and find the remainder when a is divided by b.

#include <stdio.h>
int main ()
{
    int a=100;
    int b=12;
    int remainder = a%b;
    printf ("The remainder is : %d",remainder);
    int divider = a/b;
    printf ("\nThe divider is : %d",divider);
    return 0;

}