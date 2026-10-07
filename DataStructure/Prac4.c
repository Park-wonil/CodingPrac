#include <stdio.h>
#include <string.h>
int f(int* a, int b, int c){
    if(*a % 2 ==1) return b+c;
    else *a /= 2;
    printf("%d, %d, %d\n", *a,b,c);
    int ret = 0;
    ret +=f(&b,c,*a);
    printf("%d, %d, %d\n",*a,b,c);
    ret +=f(&c,*a,b);
    return ret;
}
int main(){
    int x=1;
    int y=2;
    int z=3;
    printf("%d %d",f(&x,y,z),f(&y,x,z));
     return 0;

}