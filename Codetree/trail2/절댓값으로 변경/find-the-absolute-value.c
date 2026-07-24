#include <stdio.h>
#define MAX_N 50
int arr[MAX_N];
void abs1(int *arr,int x){
    for(int i=0;i<x;i++){
        if(*(arr+i)>=0){
            printf("%d ",*(arr+i));}
        else{
            printf("%d ",-*(arr+i));
        }
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