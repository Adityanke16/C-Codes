#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if( i==n/2+1 || j==1 || j==m)
                printf("* ");
            else    printf("  ");    
        }
        printf("\n");
    }
    return 0;
}