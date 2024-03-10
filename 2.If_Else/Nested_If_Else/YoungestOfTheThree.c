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
    if(a>b){
        if(a>c)
              printf("Youngest Ram");
        else
              printf("Youngest Ajay");
    }
    else{
        if(b>c)
              printf("Youngest Shaym");
         else
              printf("Youngest Ajay");
    }
    return 0;
}   