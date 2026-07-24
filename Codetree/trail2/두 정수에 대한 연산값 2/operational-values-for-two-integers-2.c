#include <stdio.h>

int a, b;
void hi(int *a,int *b){
    if(*a>*b){
        *b+=10;
        *a*=2;
        
    }else{
        *a+=10;
        *b*=2;
    }
}
int main() {
    scanf("%d %d", &a, &b);
    hi(&a,&b);
    printf("%d %d",a,b);
    
    return 0;
}