#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // 2*i-1 as we in odd no we print one less star like if i = 3 we will print 5 stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}
