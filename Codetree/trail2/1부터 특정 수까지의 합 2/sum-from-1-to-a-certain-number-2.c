#include <stdio.h>
int cnt;
int wonil(int x){
    if(x==0){
        return cnt;
    }
    cnt+=x;
    wonil(x-1);

}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d",wonil(n));
    return 0;
}