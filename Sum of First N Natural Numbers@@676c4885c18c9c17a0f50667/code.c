#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        n=n*(n+1)/2;
    }
    printf("%d",n);
    return 0;
}