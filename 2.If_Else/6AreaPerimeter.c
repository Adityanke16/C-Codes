#include <stdio.h>
int main ()
{
    int l,b,area,perimeter;
    printf("Enter the length : ");
    scanf("%d",&l);
    printf("Enter the breadth : ");
    scanf("%d",&b);
    area = l * b;
    perimeter = 2 * (l + b);
    if(area > perimeter){
        printf("Area is greater then perimeter");
    }
    else{
        printf("Area is not greater then perimeter");
    }
    return 0;
} 