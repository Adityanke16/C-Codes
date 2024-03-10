#include <stdio.h>
int main ()
{
    float radius;
    printf ("Enter the radius : ");
    scanf("%f",&radius);
    float pi=3.14;
    float volume = 4*pi*radius*radius*radius/3;
    printf("The Volume Of Sphere is : %f",volume);
    return 0;
}