#include <stdio.h>
int main ()
{
    int n;
    printf("Enter Percentage : ");
    scanf("%d",&n);
    // more then 80 -> A
    // more then 60 -> B
    // more then 40 -> C
    // Less then 40 -> D

    if(n>80){
        printf("A grade");
    }
    else {
         if(n>60){
                printf("B grade");
            } 
            else{
                if(n>40){
                   printf("C grade");
                }
                else{
                   printf("D grade");
                }
            }
    }

    // if(n>80){
    //     printf("A grade");
    // }
    // else if(n>60){
    //     printf("B grade");
    // }
    // else if(n>40){
    //      printf("C grade");
    // }
    // else{
    //     printf("D grade");
    // }
    return 0;
}