#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    int sumEven = 0,sumOdd = 0;
    for (int i=0; i<=n-1; i++){
        if(i%2==0) sumEven += arr[i];
        else sumOdd +=  arr[i];
    }
    int difference = sumEven - sumOdd;
    printf("\nDifference = %d",difference);
    return 0;
}