#include <stdio.h>

int main() {
    int n,m,cnt=0;
    scanf("%d %d\n",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==m){
        cnt++;}
    }
    printf("%d",cnt);
    return 0;
}