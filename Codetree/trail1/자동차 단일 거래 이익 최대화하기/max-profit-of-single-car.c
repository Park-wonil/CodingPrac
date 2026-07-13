#include <stdio.h>

int main() {
    int n,M=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if((arr[j]-arr[i])>M){
                M = arr[j]-arr[i];
            }
        }
    }
    printf("%d",M);
    return 0;
}