#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){   //  n>0  only +ve ke liye work kare ga
        n =n/10;
        count++;
    }
    printf("The number of digit are %d",count);
    return 0;
}