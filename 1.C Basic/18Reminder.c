#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int reminder = a%b;  //  Modulo operter ' % '
    printf("The Reminder is : %d",reminder); 
    return 0;
}