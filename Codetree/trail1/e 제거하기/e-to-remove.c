#include <stdio.h>

int main() {
    int cnt1=0,cnt2=0;
    char a[100];
    scanf("%s", a);
    for(int i=0;a[i]!=0;i++){
        if(a[i]=='e'){
            cnt1++;
            break;
        }else{

            cnt1++;
        }
    }
    for(int i=cnt1-1;a[i]!='\0';i++){
        a[i]=a[i+1];
    }
    printf("%s",a);

    return 0;
}