#include <stdio.h>
int arr[20],cnt;
int wonil(int x){
    arr[0]=1,arr[1]=1;
    if(x<=2){
        return arr[cnt+1];
    }
    arr[cnt+2]=arr[cnt+1]+arr[cnt];
    cnt++;
    return wonil(x-1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d",wonil(n));
    
    
    return 0;
}