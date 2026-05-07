#include <stdio.h>

int main() {
    int i,cnt=0;
    scanf("%d", &i);
    int n[i];
    for(int j=0;j<i;j++){
        scanf("%d",&n[j]);
        cnt+=n[j];
    }
    printf("%d %.1f",cnt,(float)cnt/i);
    return 0;
}