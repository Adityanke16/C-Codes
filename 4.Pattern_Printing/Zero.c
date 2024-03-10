#include <stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            int a = i+j;
            if(a%2==0)  
            // if(a%2==0 ==0)    //-> true= 1, 1==0 -< false
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}