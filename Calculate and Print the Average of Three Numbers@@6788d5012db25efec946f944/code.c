#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int sum;
    int average;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum = a + b + c;
    average = sum/3;
    printf("%d", average);
    return 0;
}