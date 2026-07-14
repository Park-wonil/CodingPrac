#include <stdio.h>
#include <string.h>
int main() {
    int n,cnt=0,avg=0;
    scanf("%d",&n);
    char arr[n][20],a;
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    scanf(" %c",&a);
    for(int i=0;i<n;i++){
        if(arr[i][0]==a){
            cnt++;
            avg+=strlen(arr[i]);
        }
    }
    printf("%d %.2f",cnt,((float)avg/cnt));
    return 0;
}