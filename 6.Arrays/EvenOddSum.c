#include <stdio.h>
int main (){
    int arr[6] = {1,3,5,7,9,11};
    int sumEven = 0;  // 1 + 5 + 9 = 15
    int sumOdd = 0;   // 3 + 7 + 11 =21
    for(int i=0; i<=5; i++){
        if(i%2==0){
            sumEven = sumEven+arr[i];
        }
        else {
            sumOdd = sumOdd+arr[i];
        }
    }
    int difference = sumEven - sumOdd;
    printf("\nDifference = %d",difference);
    return 0;
}