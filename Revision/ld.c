#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    // 1+2+3+4+5 .......n terms
    int sum = n(n+1)/2;
    printf("The sum is : %d ",sum);
    return 0;
}