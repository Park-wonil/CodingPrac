#include <stdio.h>

int main() {
    int tem[3],cntA=0;
    char a[3];
    for(int i=0;i<3;i++){
        scanf("%c %d\n",&a[i],&tem[i]);
        if(a[i]=='Y' && tem[i]>=37){
            cntA+=1;
        }
    }
    if(cntA>=2){
        printf("E");
    }else{
        printf("N");
    }



    return 0;
}