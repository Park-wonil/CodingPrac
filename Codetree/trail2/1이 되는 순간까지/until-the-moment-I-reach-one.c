#include <stdio.h>
int cnt,a;

int wonil(int x){
    if(x==1){
        return cnt;
    }
    if(x%2==0){
        cnt++;
        return wonil(x/2);
    }else{
        cnt++;
        return wonil(x/3);
    }
    
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d",wonil(n));
    return 0;
}