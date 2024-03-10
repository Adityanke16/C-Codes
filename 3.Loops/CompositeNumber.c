#include <stdio.h>
int main (){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i=2; i<=n-1; i++){
        if(n%i==0){  //i is a factor of n
            printf("The given number is composite\n");
            break;
        }
    }
    return 0;
}