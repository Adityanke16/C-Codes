#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){
            //pattern 'P' 
        for(int j=1; j<=m; j++){
            int a = n/2+1;
            if(j==1 || (i==1 && j<5)  || (i==4 && j<5) || (j==5 && i>1 && i<4))
                printf("* ");
            else    printf("  ");    
        }
        printf(" ");
             //pattern 'A' 
         for(int j=1; j<=m; j++){
            if(i==1 || i==n/2+1 || j==1 || j==m)
                printf("* ");
            else    printf("  ");    
        }
        printf("  ");
            //pattern 'R' 
        for(int j=1; j<=m; j++){
            if(j==1 || (i==1 && j<5)  || (i==4 && j<5) || (j==5 && i>1 && i<4) || i-j==2)
                printf("* ");
            else    printf("  ");    
        }
        printf(" ");
            //pattern 'T' 
        for(int j=1; j<=m; j++){
            if(i==1 || j==m/2+1)
                printf("* ");
          
          else    printf("  ");    
        }
        printf("  ");
            //pattern 'H' 
        for(int j=1; j<=m; j++){
            if( i==n/2+1 || j==1 || j==m)
                printf("* ");
            else    printf("  ");    
        }
        printf("\n");
    }
    return 0;
}