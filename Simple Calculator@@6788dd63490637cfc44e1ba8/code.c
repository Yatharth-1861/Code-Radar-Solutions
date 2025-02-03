#include <stdio.h>

int main() {
    double a,b,z,y,x,w;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    if(c=='+'){
        z = a+b;
        printf("%lf",z);
    }
    else if(c=='-'){
        y = a-b;
        printf("%lf",y);
    }
    else if(c=='*'){
        x = a*b;
        printf("%lf",x);
    }
    else if(c=='/'){
        w = a/b;
        printf("%lf",w);
    }
    return 0;
}