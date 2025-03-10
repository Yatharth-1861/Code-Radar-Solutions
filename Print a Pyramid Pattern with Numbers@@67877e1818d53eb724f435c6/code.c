#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        // this resets the count after each line 
        // so that we can from 1 in every line
        int count = 1;
        // for " "
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        // for count
        for(int k = 1;k<=i;k++){
            printf("%d ",count);
            count = count + 1;
        }
        printf("\n");
    }
}