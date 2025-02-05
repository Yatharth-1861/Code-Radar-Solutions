#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        i=i*(i+1)/2;
    }
    printf("%d",i);
    return 0;
}