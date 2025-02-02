#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    char lowerch = tolower(ch);
    if(ch>=0 && ch<=9){
        printf("Digit");
    }
    else if(lowerchch!='a' || lowerch!='i' || lowerchch!='o' || lowerchch!='e' || lowerchch!='u'){
        printf("Consonant");
    }
    else if(lowerchch=='a' || lowerchch=='e' || lowerchch=='i' || lowerchch=='o' || lowerchch=='u'){
        printf("Vovel");
    }
    else{
        printf("Special Character");
    }
    return 0;
}