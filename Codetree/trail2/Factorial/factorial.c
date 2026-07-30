#include <stdio.h>
int F(int x){
    if(x==1){
        return 1;
    }
    return F(x-1)* x;
}
int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d",F(n));
    
    return 0;
}