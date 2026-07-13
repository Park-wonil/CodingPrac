#include <stdio.h>

int main() {
    int n,cnt=0,a,A;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a==2){
            cnt+=1;
        }
        if(cnt==3){
            A=i+1;
            cnt++;
        }
    }
    printf("%d",A);
    return 0;
}