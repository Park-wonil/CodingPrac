#include <stdio.h>

int main() {
    int a,b,c,d,e;
    scanf("%d\n",&a);
    scanf("%d %d %d %d",&b,&c,&d,&e);
    if(a>b){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }
    if(a>c){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }
    if(a>d){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }
    if(a>e){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }
    return 0;
}