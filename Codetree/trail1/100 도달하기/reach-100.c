#include <stdio.h>

int main() {
    int n,arr[100],cnt=0,i=0;
    scanf("%d",&n);
    arr[0]=1,arr[1]=n;
    while(arr[i-1]<100){
        printf("%d ",arr[i]);
        arr[i+2]=arr[i]+arr[i+1];
        i++;
    }
    return 0;
}