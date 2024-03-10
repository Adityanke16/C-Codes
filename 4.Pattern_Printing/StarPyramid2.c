// (Yh keval n = 4 ke liye hai)  ~>  [ (n = 4 , nsp = n -1 ) agar in general ke liye yh ]

#include <stdio.h>
int main (){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int nsp = n-1;     // nst - number of sapace
    int nst = 1;    // nst - number of stars
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
        }
        nsp = nsp - 1;
        for(int k=1; k<=nst; k++){
            printf("* ");
        }
        nst = nst+2;
        printf("\n");
    }
    return 0;
}