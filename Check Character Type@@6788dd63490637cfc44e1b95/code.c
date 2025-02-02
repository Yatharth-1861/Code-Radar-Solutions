#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>=0 && ch<=9){
        printf("Digit");
    }
    else if(ch!=a || ch!=i || ch!=e || ch!=o || ch!=u){
        printf("Consonant");
    }
    else if(ch==a || ch==e || ch==i || ch==o || ch==u){
        printf("Vovel");
    }
    else{
        printf("Special Character");
    }
    return 0;
}