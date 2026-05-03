#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    while(1){
        if(a>b){
            break;
        }else{
            printf("%d ",a);
        }
        if(a%2==1){
            a*=2;
        }else{
            a+=3;
        }
        
    }
    return 0;
}