#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int sum;
    int average;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    sum = a + b + c;
    average = sum/3;
    printf("%.2f", average);
    return 0;
}