#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    if(n==m){
        for(int i=1; i<=n; i++){
         for(int i=1; i<=m; i++){
            printf("*");
         }
        printf("\n");
        }
    }
    else printf("Not Solid Square ");
    
    return 0;
}