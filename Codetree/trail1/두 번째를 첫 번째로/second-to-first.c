#include <stdio.h>

int main() {
    char a[100],b;
    scanf("%s",a);
    b=a[1];
    for(int i=1;a[i]!='\0';i++){
        if(a[i]==b){
            a[i]=a[0];
        }
    }
    printf("%s",a);
    return 0;
}