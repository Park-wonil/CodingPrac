#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a = a+8;
    b = b*3;
    int c = a*b;
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}