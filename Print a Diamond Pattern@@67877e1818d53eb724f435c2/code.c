#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        // to print spaces
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        // to print *
        for(int k = 1;k<=i;k++){
            printf("*");
        }
                // to print spaces
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        printf("\n");
    }
}