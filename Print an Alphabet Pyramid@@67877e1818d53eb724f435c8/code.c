#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        // so that the alphabets reset everytime for new line
        char ch = 'A';
        // for " "
        for(int j = 1;j<=n-1;j++){
            printf(" ");
        }
        // for alphabets
        for(int k = 1;k<=i;k++){
            printf("%c",ch);
            ch++;
        }
    }
}