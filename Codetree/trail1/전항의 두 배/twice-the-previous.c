#include <stdio.h>

int main() {
    int a1,a2,arr[10];
    scanf("%d %d",&a1,&a2);
    arr[0]=a1,arr[1]=a2;
    for(int i=0;i<10;i++){
        arr[i+2]=arr[i+1]+2*arr[i];
    
        printf("%d ",arr[i]);
    }
    
    return 0;
}