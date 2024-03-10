#include <stdio.h>
int main (){
    //  100 97 94 .....upto all terms which are positive
    int a=100;
    for(int i=1; a>0; i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}