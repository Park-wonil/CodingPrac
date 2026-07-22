#include <stdio.h>

int main() {
    char a[20];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        if((int)a[i]>=97){
            printf("%c",a[i]-32);
        }else{
            printf("%c",a[i]+32);
        }
    }
    return 0;
}