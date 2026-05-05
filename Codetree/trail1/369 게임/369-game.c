#include <stdio.h>

int main() {
    int n,i=1,j;
    scanf("%d",&n);
    while(n>=i){
    j=i%10;
    //3의배수
    if(i%3==0){
        printf("%d ",0);
    }else if(j%3==0 && j!=0){
        printf("%d ",0);
        
    }else if((i>=30&&i<40)||(i>=60&&i<70)||(i>=90&&i<100)){
        printf("%d ",0);}else{
        printf("%d ", i);
    }
    i++;
    }
    
    return 0;
}