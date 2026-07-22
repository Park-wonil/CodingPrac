#include <stdio.h>
void a(int x){
    for(int i=0;i<x;i++){
        printf("12345^&*()_\n");
    }
}
int main() {
    int b;
    scanf("%d",&b);
    a(b);
    return 0;
}