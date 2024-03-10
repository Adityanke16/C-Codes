#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 1;
    for(int i=1; i<=n; i++){
        if(i<=2) printf("The %dth fibonacci is %d\n",i,a);
        else if(i>2){
            sum = a+b;
            a = b;
            b = sum;
            printf("The %dth fibonacci is %d\n",i,sum);
        }
    }
    return 0;
}