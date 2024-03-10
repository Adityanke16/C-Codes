#include <stdio.h>
int main(){
    void india();
    india();  //calling india               
    return 0 ;                          
}
void india(){
    printf("Yor are in India\n");  
    void australia();          
    australia(); // calling australia        
    return;                              
}
void australia(){
    printf("Yor are in Australia\n");
    void england();         
    england();  //calling england             
    return;                              
}
void england(){
    printf("You are in England\n");           
    return;                             
}