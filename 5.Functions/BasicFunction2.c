#include <stdio.h>
void england(){
    printf("You are in England\n");           //6
    return;                               //7
}
void australia(){
    printf("Yor are in Australia\n");         //4
    england();  //calling england             //5
    return;                              //8
}
void india(){
    printf("Yor are in India\n");            //2
    australia(); // calling australia        //3
    return;                              //9
}
int main(){
    india();  //calling india                //1
    return 0 ;                          //10
}