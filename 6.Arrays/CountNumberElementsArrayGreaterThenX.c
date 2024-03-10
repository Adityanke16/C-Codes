#include <Stdio.h>
int main (){
    int x = 4;
    int arr[7]={1,8,9,5,7,3,0};
    int count = 0;
    for(int i=0; i<=6; i++){
        if(arr[i]>x) count ++;
    }
    printf("%d ",count);
    return 0;
}