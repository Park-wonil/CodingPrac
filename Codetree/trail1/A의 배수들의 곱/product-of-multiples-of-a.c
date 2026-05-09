#include <stdio.h>

int main() {
    int a,b,n=1;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%a==0){
            n*=i;
        }
    }
    printf("%d",n);
    return 0;
}