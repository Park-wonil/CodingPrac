#include <stdio.h>
#include <stdbool.h>
bool con(int x){
    int cnt=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            cnt++;
        }
    }
    return cnt==2;
}
int main() {
    int a,b,result=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(con(i)){
            result+=i;
        }
    }
    printf("%d",result);
    return 0;
}