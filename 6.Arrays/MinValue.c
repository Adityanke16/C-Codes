#include <stdio.h>
#include <limits.h>
int main (){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    // for(int i=0; i<=n-1; i++){
    //     printf("%d ",arr[i]);
    // }
    int min = INT_MAX;  // sabse badda number hai int
    for(int i=0; i<=n-1; i++){
        if(min>arr[i]){
        min = arr[i];
        }
    }
    printf("\nmin value = %d",min);
    return 0;
}