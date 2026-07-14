#include <stdio.h>
#include <string.h>
int main() {
    char a[1001],b[3];
    int cnt=0;
    scanf("%s",a);
    scanf("%s",b);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b[0] && a[i+1]==b[1]){
            cnt++;
        }
        }
    printf("%d",cnt);
    return 0;
}