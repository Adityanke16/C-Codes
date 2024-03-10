#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //  ***********...... upto n no. of stars
    for(int i=1; i<=3; i++){  //outer loops  -> no. of lines = no. of rows
        for(int i=1; i<=n; i++){ //inner ioops -> no. of stars in each line = no. of columns
            printf("*");
        }
        printf("\n"); // Har line ke baad ek enter maarne ke liye hai
    }
    return 0;
}