#include <stdio.h>
#include <string.h>
char A[101];
void over(char *A){
    int check[26]={0},cnt=0;
    for(int i=0;i<strlen(A);i++){
        int idx;
        idx = A[i] - 'a';
        if(check[idx] == 0){
            check[idx]=1;
            cnt++;
        }
    }
    if(cnt>=2){
        printf("Yes");
    }else{
        printf("No");
    }
}
    
int main() {
    scanf("%s", A);
    over(A);
    
    // Please write your code here.
    
    return 0;
}