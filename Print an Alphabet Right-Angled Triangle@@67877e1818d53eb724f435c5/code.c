#include <stdio.h>

int main() {
    int n,i,j;
    char x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            x = 'A';
            printf("%c ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}