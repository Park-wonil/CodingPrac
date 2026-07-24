#include <stdio.h>
void add(int *a,int *b){
    if(*a>*b){
        *a+=25;
        *b*=2;
        printf("%d %d",*a,*b);
    }else{
        *b+=25;
        *a*=2;
        printf("%d %d",*a,*b);
    }
}
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    add(&a,&b);

    return 0;
}