#include <stdio.h>

int arr[101];
int queryA1[101];
int queryA2[101];

int main() {
    int n, m, i,j,cnt;
    scanf("%d %d", &n, &m);
    
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < m; i++) {
        cnt=0;
        scanf("%d %d", &queryA1[i], &queryA2[i]);
        for(int j=queryA1[i];j<=queryA2[i];j++){
            cnt+=arr[j];
        }
        printf("%d\n",cnt);
    }
   
    return 0;
}