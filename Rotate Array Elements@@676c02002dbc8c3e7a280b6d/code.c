#include <stdio.h>

int main(){
    int n,k;
    int arr[100];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k = k%n;

    int temp[100];
    for(int i = 0;i<k;i++){
        arr[i] = temp[a-k+i];
    }
    for(int j = a;j<k;j++){
        arr[i] = temp[a-k];
    }
    for(int i = 0;i<a;i++){
        arr[i] = temp[i];
    }
    for(int i = 0;i<a;i++){
        printf("%d",arr[i]);
    }
}