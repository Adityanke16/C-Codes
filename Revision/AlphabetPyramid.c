#include <stdio.h>
int main (){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int nsp = n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
        }
        nsp--;
        for(int k=1; k<=i; k++){
            char ch = (char)(k+64);
            printf("%c ",ch);
        }
        int b = i-1;
        for(int l=1; l<=i-1; l++){
            char ch = (char)(b+64);
            printf("%c ",ch);
            b--;
        }
        printf("\n");
    }
    return 0;
}