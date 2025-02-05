#include <stdio.h>

int main() {
    int n,i,j;
    char x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x = 'A';
        for(j=1;j<=i;j++){
            printf("%c ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}