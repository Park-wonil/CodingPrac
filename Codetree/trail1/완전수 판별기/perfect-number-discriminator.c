#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            cnt+=i;
        }
        
    }
    if(cnt==n){
        printf("P");
    }else{
        printf("N");
    }
    return 0;
}