#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Age of Ram : ");
    scanf("%d",&a);
    printf("Age of Shaym : ");
    scanf("%d",&b);
    printf("Age of Ajay : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("Youngest Ram");
    }
    if(b>a && b>c)
    {
        printf("Youngest Shyam");
    }
    if(c>a && c>b)
    {
        printf("Youngest Ajay");
    }
    return 0;
}