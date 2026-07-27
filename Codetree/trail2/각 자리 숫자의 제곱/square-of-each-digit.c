#include <stdio.h>
int wonil(int x){
    if(x<10){
        return x*x;
    }
    return wonil(x/10)+ (x%10)*(x%10);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d",wonil(n));
    return 0;
}