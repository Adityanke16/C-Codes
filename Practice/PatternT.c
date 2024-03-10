#include <stdio.h>
int main(){
    int n =6,m =7;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || j==m/2+1)
                printf("* ");
            else    printf("  ");    
        }
        printf("\n");
    }
    return 0;
}