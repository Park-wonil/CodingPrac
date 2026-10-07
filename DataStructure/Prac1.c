#include <stdio.h>
#include <string.h>
int main(){
    int i,sale[4]={157,209,251,312};
    for(i=0;i<4;i++){
        printf("\n address : %u sale[%d] = %d", &sale[i],i,sale[i]);
//형변환으로 sale[i]의 주소를 정수형으로 변환하여 출력
}
    return 0;
}