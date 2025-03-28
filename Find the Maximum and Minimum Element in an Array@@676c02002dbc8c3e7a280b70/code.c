#include<stdio.h>
int main(){
    int N;
    int arr [N+1];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("arr[%d]",&i);
    }
    for(int i=0;i<N;i++){
        if(arr[0]>arr[i]){
            arr[0]==arr[i];
        }
        printf("%d",arr[i]);
    }
}

