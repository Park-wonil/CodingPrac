#include <stdio.h>
void a(int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("1");
        }
        printf("\n");
    }
}
int main() {
    int c,d;
    scanf("%d %d",&c,&d);
    a(c,d);
    return 0;
}