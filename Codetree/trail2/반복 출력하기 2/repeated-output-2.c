#include <stdio.h>
void hi(int x){
    if(x==0){
        return;
    }
    hi(x-1);
    printf("HelloWorld\n");
}
int main() {
    int n;
    scanf("%d",&n);
    hi(n);
    
    return 0;
}