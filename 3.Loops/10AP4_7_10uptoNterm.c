#include <stdio.h>
int main(){
    int n;  // itni baar loop chalega  
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=4; i<=3*n+1; i=i+3){
        printf("%d ",i);
    }
}