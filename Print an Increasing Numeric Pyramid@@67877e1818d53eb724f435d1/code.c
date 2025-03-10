#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);


    for(int i = 1;i<=n;i++){
        // so that after every line the count resets
        int count = 1;
        // for " "
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        // for count
        for(int k = 1;k<=i;k++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}