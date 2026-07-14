#include <stdio.h>
#include <string.h>
int main() {
    char arr1[100],arr2[100],cnt=0;
    scanf("%s",arr1);
    for(int i=0;arr1[i]!='\0';i++){
        if(i%2==1){
            arr2[cnt]=arr1[i];
            cnt++;
        }
    }
    arr2[cnt]='\0';
    for(int i=strlen(arr2)-1;i>=0;i--){
        printf("%c",arr2[i]);
    }

    return 0;
}