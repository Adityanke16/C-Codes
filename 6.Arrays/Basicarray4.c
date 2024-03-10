#include<stdio.h>
int main(){
    // int arr[5] = {2,4,6,8,1};
    // for(int i=0; i<=4; i++)
    //     printf("%d ",arr[i]);
    int arr[5];
    for(int i=0; i<=4; i++){
        printf("Enter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}