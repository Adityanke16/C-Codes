#include <stdio.h>
int main(){
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
    int totalPairs = 0;
    int x;
    printf("\nEnter the number : ");
    scanf("%d",&x);
    for(int i=0; i<=n-1; i++){
        for(int j=i+1; j<=n-1; j++){
            if(arr[i]+arr[j] == x){
                totalPairs++;
                printf("(%d %d) ",arr[i],arr[j]);
            }
        }
    }
    printf("\nTotalPairs = %d",totalPairs);
    return 0;
}
