#include <stdio.h>
#include <limits.h>
int main (){
    int arr[7] = {2,8,6,4,9,11,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
        max = arr[i];
        }
    }
    for(int i=0; i<=6; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    // for(int i=0; i<=6; i++){
    //     if(max<arr[i]){
    //         smax = max;    // smax is now previous max
    //         max  = arr[i];  // max is now a new max
    //     }
    // }
    printf("\nsmax value = %d",smax);
    return 0;
}