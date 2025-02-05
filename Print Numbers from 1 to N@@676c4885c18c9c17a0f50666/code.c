#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        // we put a single space after %d as it was required in the output
        printf("%d ",i);
    }
    return 0;
}