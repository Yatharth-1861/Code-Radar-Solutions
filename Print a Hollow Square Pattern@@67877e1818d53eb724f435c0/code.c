#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
// i.e. we will print "*" for first row and for first column
// and we will print " " for rest all
            if(i==0 || i == n-1 || j==0 || j == n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}