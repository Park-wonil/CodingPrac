#include <stdio.h>

int main() {
    int r=5,c=3;
    char a;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf(" %c",&a);
            printf("%c ",a-32);
        }
        printf("\n");
    }
    return 0;
}