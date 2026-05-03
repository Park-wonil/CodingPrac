#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for(;a<=b;a++){
        if(a%2==1){
            printf("%d ", a);
        }
    }
    return 0;
}