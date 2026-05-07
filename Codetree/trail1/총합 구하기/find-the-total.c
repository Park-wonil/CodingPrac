#include <stdio.h>

int main() {
    int a,b,cnt=0;
    scanf("%d %d",&a,&b);
    for(;a<=b;a++){
        if(a%6==0 && a%8!=0){
            cnt+=a;
        }
    }
    printf("%d",cnt);
    return 0;
}