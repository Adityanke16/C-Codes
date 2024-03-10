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
            for(int k=j+1; k<=n-1; k++){
                if(arr[i]+arr[j]+arr[k] == x){
                  totalPairs++;
                 printf("(%d %d %d) ",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("\nThere are %d triplets",totalPairs);
    return 0;
}
