#include <stdio.h>
#include <stdbool.h>
bool con(int y){
    if(y%100==0 && y%400!=0){
        return false;
    }
    if(y%4==0){
        return true;
    }else{
        return false;
    }
}
int main() {
    int y;
    scanf("%d",&y);
    if(con(y)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}