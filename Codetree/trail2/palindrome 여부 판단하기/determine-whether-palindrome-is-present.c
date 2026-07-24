#include <stdio.h>
#include <string.h>
void check(char *a,int x){
    char b[100];
    int cnt=0;
    for(int i=x;i>=0;i--){
        b[cnt]=a[i];
        cnt++;
    }
    b[cnt]='\0';
    if(strcmp(a,b)==0){
        printf("Yes");
    }else{
        printf("No");
    }
}
int main() {
    char a[100];
    scanf("%s",a);
    int n = strlen(a)-1;
    check(a,n);
    return 0;
}