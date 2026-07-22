#include <stdio.h>
void gcd(int a,int b){
    int max=1;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                max = i;
            }
        }
    }else{
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                max = i;
            }
        }
    }
    printf("%d",max);
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    gcd(n,m);
    return 0;
}