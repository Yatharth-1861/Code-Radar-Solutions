#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%x",&a);
    scanf("%o",&b);
    printf("Hexadecimal: %x \n", a);
    printf("Octal: %o", b);
    return 0;
}