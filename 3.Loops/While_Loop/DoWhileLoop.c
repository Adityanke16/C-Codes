#include <stdio.h>
int main(){
     int i =10;
    // while(i<10){  not true isliye yha condition nhi chalega isliye output khuchh nhi aa rha hai.
    //     printf("Aditya Sharma.\n");
    //     i++;
    // }
    do{   // yh condition ek bar jarur chalega.
        printf("Aditya Sharma.\n");
        i++;
    } while(i<10);
    return 0;
}