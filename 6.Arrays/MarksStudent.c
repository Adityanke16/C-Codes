#include <stdio.h>
int main (){
    // int marks[10] = {12,74,30,55,45,62,25,88,90,34};
    int marks[10];
    for(int i=0; i<=9; i++){
        printf("Enter element number %d\n",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0; i<=9; i++){
        if(marks[i]<35)
        printf("%d ",i);
    }
    return 0;
}