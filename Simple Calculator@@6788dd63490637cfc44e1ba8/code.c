#include <stdio.h>

int main() {
    int a,b,z,y,x,w;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        z = a+b;
        printf("%d",z);
    }
    else if(c=='-'){
        y = a-b;
        printf("%d",y);
    }
    else if(c=='*'){
        x = a*b;
        printf("%d",x);
    }
    else if(c=='/'){
        w = a/b;
        printf("%d",w);
    }
    return 0;
}