#include <stdio.h>
int main(){
    int a,k;
    scanf("%d",&a);
    int arr[100];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k)
    k = k % a;
    
    int temp[100];  // to store rotated elements
    for(int j = 0;j<k;j++){
        arr[j] = arr[a-k+j];  // to store last k elements
    }

    for(int j = k;j<a;j++){
        arr [j] = arr[j-k];   // to store the remaining elements
    }

    for(int i = 0;i<a;i++){
        arr[i] = temp[i];
    }
    for(int i = 0;i<a;i++){
        printf("%d",arr[i]);
    }
}