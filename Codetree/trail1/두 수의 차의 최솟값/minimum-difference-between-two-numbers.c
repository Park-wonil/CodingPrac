#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==0 && j==1){
                m=abs(arr[i]-arr[j]);
            }else{
                if(abs(arr[i]-arr[j])<m){
                    m=abs(arr[i]-arr[j]);
                }
            }
        }
        
    }
    printf("%d",m);
    return 0;
}