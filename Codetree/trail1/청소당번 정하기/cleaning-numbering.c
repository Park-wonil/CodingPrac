#include <stdio.h>

int main() {
    int n,cnt1=0,cnt2=0,cnt3=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%12==0){
            cnt3+=1;
        }else if(i%3==0){
            cnt2+=1;
        }else if(i%2==0){
            cnt1+=1;
        }
    }
    printf("%d %d %d",cnt1,cnt2,cnt3);
    return 0;
}