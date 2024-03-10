#include <stdio.h>
int main(){
    int n = 7,m = 6;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(j==1 || (i==1 && j<5)  || (i==4 && j<5) || (j==5 && i>1 && i<4) || i-j==2)
                printf("* ");
            else    printf("  ");    
        }
        printf("\n");
    }
    return 0;
}