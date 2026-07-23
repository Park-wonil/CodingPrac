#include <stdio.h>
void a(int x){
    int cnt=0;
    for(int i=1;i<=x;i++){
        cnt+=i;
    }
    printf("%d",cnt/10);
}
int main() {
    int n;
    scanf("%d",&n);
    a(n);
    return 0;
}