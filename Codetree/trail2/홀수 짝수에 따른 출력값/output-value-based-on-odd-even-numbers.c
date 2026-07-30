#include <stdio.h>
int wonil(int x){
    if(x%2==0){
        if(x==0){
            return 0;
        }
        return wonil(x-2) + x;
    }else{
        if(x==1){
            return 1;
        }
        return wonil(x-2) + x;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d", wonil(n));
    
    return 0;
}