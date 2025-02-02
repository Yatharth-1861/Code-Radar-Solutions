#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // Equilateral Triangle
    if(a==b && b==c){
        printf("Equilateral");
    }
    // Isosceles Triangle
    else if(a==b || b==c || a==c){
        printf("Isosceles");
    }
    // Scalene Triangle
    else if(a!=b!=c){
        printf("Scalene");
    }
    return 0;
}