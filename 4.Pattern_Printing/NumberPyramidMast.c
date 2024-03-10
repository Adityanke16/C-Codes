/*       1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
*/
#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int nsp = n-1;
    for(int i=1; i<=n; i++){
        // for(int j=1; j<=n-i; j++){  // spaces ke liye ek loop
        //     printf("  ");
        // }
        for(int j=1; j<=nsp; j++){
            printf("  ");
        }
        nsp--;

        for (int k=1; k<=i; k++){   // number triangle
            printf("%d ",k);
        }
        int a=i-1;  // exter cheez
        for(int l=1; l<=i-1; l++){
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}