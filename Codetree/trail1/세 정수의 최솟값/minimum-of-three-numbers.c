#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c){
        if(b>=c){
            printf("%d",c);
        }else{
            printf("%d",b);
        }
    }else if(a<=b&&a>=c){
        printf("%d",c);
    }else if(a>=b&&c>=a){
        printf("%d",b);
    }else{
        printf("%d",a);
    }
    return 0;
}