#include <stdio.h>

int main(){
    int a,k;
    int arr[100];
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k = k%a;

    int temp[100];
    for(int i = 0;i<k;i++){
        temp[i] = arr[a-k+i];
    }
    for(int j = a;j<k;j++){
        temp[i] = arr[a-k];
    }
    for(int i = 0;i<a;i++){
        arr[i] = temp[i];
    }
    for(int i = 0;i<a;i++){
        printf("%d",arr[i]);
    }
}