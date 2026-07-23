#include <stdio.h>
#include <stdbool.h>
bool con1(int a){
    int temp = a,cnt=0;
    for(;temp>=10;){
        if(temp%10==3||temp%10==6||temp%10==9){
            cnt++;
        }
        temp = temp/10;
    }
    if(temp%10==3||temp%10==6||temp%10==9){
            cnt++;
        }
    return cnt>0;
    
}
bool con2(int a){
    return a%3==0;
}
int main() {
    int a, b,cnt=0;
    scanf("%d %d", &a, &b);
    for(int i=a;b>=i;i++){
    if(con1(i)||con2(i)){
        cnt++;
    }
    }
    printf("%d",cnt);
    return 0;
}