#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    c = a << b;
    printf("%d",c);
    return 0;
}