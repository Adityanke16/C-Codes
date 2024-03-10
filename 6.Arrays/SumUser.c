#include <stdio.h>
int main (){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int j=0; j<n; j++){
        scanf("%d",&arr[j]);
    }
     for(int j=0; j<n; j++){
        printf("%d ",arr[j]);
     }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("\nsum=%d",sum);
    return 0;
}