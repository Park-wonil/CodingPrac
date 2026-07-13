#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr1[r][c],arr2[r][c],arr3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr1[i][j]==arr2[i][j]){
                arr3[i][j]=0;
            }else{
                arr3[i][j]=1;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}