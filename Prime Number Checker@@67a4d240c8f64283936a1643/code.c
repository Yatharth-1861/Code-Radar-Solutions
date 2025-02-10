#include<stdio.h>
int isPrime(int n){
    int i,count = 0;
    for(i=1;i<=n;i++){
        if(n%i==0);
        count++;
    }
return count;
}

int main()
{
    int n,fact_count;
    scanf("%d",&n);
    fact_count = isPrime(n);
    if(fact_count==2){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}