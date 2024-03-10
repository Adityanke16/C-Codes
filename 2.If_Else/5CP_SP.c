#include <stdio.h>
int main ()
{
    int CP,SP;
    printf("Enter cost price : ");
    scanf("%d",&CP);
    printf("Enter selling price : ");
    scanf("%d",&SP);
    if(CP<SP){
        printf("Profit");
    }
    if(SP<CP){
        printf("Loss");
    }
    if(SP==CP){
        printf("NO profit, No loss");
    }
    return 0;
} 