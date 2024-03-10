#include<stdio.h>
int main (){
    int arr[5];
    // printf("Enter the first number : ");
    // scanf("%d",&arr[0]);
    // printf("Enter the second number : ");
    // scanf("%d",&arr[1]);
    // printf("Enter the three number : ");
    // scanf("%d",&arr[2]);
    // printf("Enter the foruth number : ");
    // scanf("%d",&arr[3]); 
    // printf("Enter the fifth number : ");
    // scanf("%d",&arr[4]); 

    for(int i=0; i<=4; i++){
        printf("Enter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[3]);
    return 0;
}