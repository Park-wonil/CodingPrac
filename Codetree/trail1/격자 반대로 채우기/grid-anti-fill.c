#include <stdio.h>

int main() {
    int n,a=1;
    scanf("%d",&n);
    int arr[n][n];
    if(n%2==0){
    for(int i=n-1;i>=0;i--){
        if(i%2==1){
            for(int j=n-1;j>=0;j--){
                arr[j][i]=a;
                a++;
            }
        }else{
            for(int j=0;j<n;j++){
                arr[j][i]=a;
                a++;
            }
        }
    }}else{
        for(int i=n-1;i>=0;i--){
        if(i%2==0){
            for(int j=n-1;j>=0;j--){
                arr[j][i]=a;
                a++;
            }
        }else{
            for(int j=0;j<n;j++){
                arr[j][i]=a;
                a++;
            }
        }

    }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}