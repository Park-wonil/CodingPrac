#include <stdio.h>
#include <stdlib.h>
#define MAX_N 50
int arr[MAX_N];
void abs1(int *arr,int x){
    for(int i=0;i<x;i++){
        printf("%d ",abs(*(arr+i)));
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    abs1(arr,n);
    
    
    return 0;
}