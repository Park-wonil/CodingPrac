#include <stdio.h>
void wonil1(int x){
    if(x==0){
        return;
    }
    for(int i=0;i<x;i++){
        printf("* ");
    }
    printf("\n");
    wonil1(x-1);
}
void wonil2(int x){
    if(x==0){
        return;
    }
    wonil2(x-1);
    for(int i=0;i<x;i++){
        printf("* ");
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    wonil1(n);
    wonil2(n);
    
    return 0;
}