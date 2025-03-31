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
    for(int j = 0;j<k;j++){
        temp[j] = arr[a-k+j];
    }
    for(int j = k;j<a;j++){
        temp[j] = arr[j-k];
    }
    for(int i = 0;i<a;i++){
        arr[i] = temp[i];
    }
    for(int i = 0;i<a;i++){
        printf("%d \n",arr[i]);
    }
}