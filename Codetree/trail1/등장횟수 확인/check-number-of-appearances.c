#include <stdio.h>

int main() {
    int cnt=0,n;
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        if(n%2==0){
            cnt+=1;
        }
    }
    printf("%d",cnt);
    return 0;
}