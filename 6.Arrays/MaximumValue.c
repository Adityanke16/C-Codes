#include <stdio.h>
int main (){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    int max = arr[0];  // sabse chhota number
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]){
        max = arr[i];
        }
    }
    printf("\nmax value = %d",max);
    return 0;
}