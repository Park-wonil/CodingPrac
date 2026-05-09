#include <stdio.h>

int main() {
    int n,i=1,cnt=0;
    scanf("%d",&n);
        while(1){
        n/=i;
        cnt+=1;
        i++;
        if(n<=1){
            break;
        }
    }
    printf("%d",cnt);
    return 0;
}