#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for(int i = 0;i<a;i++){
        scanf("%d",arr[i]);
    }
    for(int i = 0;i<a;i++){
        printf("%d",arr[i]);
    }

    int i,j,temp;
    for(i=0;i = n-1;i++){
        for(int j = 0;j = n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}