#include <stdio.h>
int main (){
    int n;  //itna baar loop chalega
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i=i+2){
        printf("%d ",i);
    } 
    /* int a=1;
     for(int i=1; i<=n; i++){
       printf("%d ",a);
        a=a+2;
      }
        */
    return 0;
}