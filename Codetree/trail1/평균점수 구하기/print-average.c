#include <stdio.h>

int main() {
    float arr[8],avg;
    avg=0;
    for(int i=0;i<8;i++){
        scanf("%f",&arr[i]);
        avg+=arr[i];
    }
    printf("%.1f",(float)avg/8);
    return 0;
}