#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%100==0 && i%400!=0){
            continue;
        }else if(i%4==0){
            cnt+=1;
        }
    }
    printf("%d",cnt);
    return 0;
}