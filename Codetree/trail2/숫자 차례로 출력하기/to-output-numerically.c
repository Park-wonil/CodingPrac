#include <stdio.h>
void wonil1(int x){
    for(int i=1;i<=x;i++){
        printf("%d ",i);
    }
    printf("\n");
}
void wonil2(int x){
    if(x==0){
        return;
    }
    printf("%d ",x);
    wonil2(x-1);

}
int main() {
    int n;
    scanf("%d", &n);
    wonil1(n);
    wonil2(n);
    return 0;
}