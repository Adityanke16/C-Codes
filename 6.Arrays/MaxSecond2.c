#include <stdio.h>
#include <limits.h>
int main (){
    int arr[7] = {1,2,3,4,4,3,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
            smax = max;    // smax is now previous max
            max  = arr[i];  // max is now a new max
        }
        else if(smax<arr[i] && max!=arr[i]){  //  max>arr[i]
            smax = arr[i];
        }
    }
    printf("\nsmax value = %d",smax);
    return 0;
}