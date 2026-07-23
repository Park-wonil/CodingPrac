#include <stdio.h>
#include <stdbool.h>
bool even_5(int n){
    return n%2==0 && ((n%10)+(n/10))%5==0 ;
}
int main() {
    int n;
    scanf("%d",&n);
    if(even_5(n)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}