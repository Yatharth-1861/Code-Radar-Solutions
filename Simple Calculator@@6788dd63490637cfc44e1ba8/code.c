#include <stdio.h>

int main() {
    double a,b,z,y,x,w;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    if(c=='+'){
        z = a+b;
        printf("%.0lf",z);
    }
    else if(c=='-'){
        y = a-b;
        printf("%.0lf",y);
    }
    else if(c=='*'){
        x = a*b;
        printf("%.0lf",x);
    }
    else if(c=='/'){
        if(b!=0){
            w = a/b;
        }
        else{
            printf("error");
            return 1;
        }
        printf("%.0lf",w);
    }
    return 0;
}