#include <stdio.h>

int main() {
    char ch;
    scanf("%C",&ch);
    if(ch=='A'){
        printf("Excellent");
    }
    else if(ch=='B'){
        printf("Good");
    }
    else if(ch=='C'){
        printf("Average");
    }
    else if(ch=='D'){
        printf("Below Average");
    }
    else if(ch=='E'){
        printf("Fail");
    }
    return 0;
}