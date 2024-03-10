#include <stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int nfact = 1;   // n!
    int rfact  = 1;   //r!
    int nrfact =1;  //(n-r)!
    for(int i=1; i<=n; i++){
        nfact = nfact * i;
    }
    for(int j=1; j<=r; j++){
        rfact = rfact * j;
    }
    for(int k=1; k<=n-r; k++){
        nrfact = nrfact * k;
    }
    printf("%d\n",nfact);
    printf("%d\n",rfact);
    printf("%d\n",nrfact);
    int ncr = nfact/ (rfact*nrfact);
    printf("Combination = %d",ncr);
    return 0;
}