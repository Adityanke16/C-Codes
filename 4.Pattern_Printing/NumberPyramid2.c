/*    1
     123
    12345
   1234567   
*/
#include <stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int nsp = n - 1;
    int nst = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
        }
        nsp = nsp-1;
        for(int k=1; k<=nst; k++){
            printf("%d ",k);
        }
        nst = nst+2;
        printf("\n");
    }
    return 0;
}