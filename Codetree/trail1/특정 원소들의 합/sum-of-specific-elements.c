#include <stdio.h>

int main() {
    int arr[4][4],cnt=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cnt+=arr[i][j];
        }
    }
    printf("%d",cnt);
    return 0;
}