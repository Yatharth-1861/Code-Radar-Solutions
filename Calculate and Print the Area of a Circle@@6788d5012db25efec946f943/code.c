#include <stdio.h>

int main() {
    float radius;
    scanf("%f",&radius);
    float pi;
    pi = 3.14;
    float area;
    area = pi * radius * radius;
    printf("Area: %.2f",area);
    return 0;
}