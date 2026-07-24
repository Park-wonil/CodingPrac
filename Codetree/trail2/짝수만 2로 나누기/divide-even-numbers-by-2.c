#include <stdio.h>
int even(int a,int *x){
    for(int i=0;i<a;i++){
        if(x[i]%2==0){
            x[i]=x[i]/2;
        }
        printf("%d ",*(x+i));
        }
    }
int main() {
    int n;
    scanf("%d", &n);
    int m[n];
    for(int i=0;i<n;i++){
        scanf("%d", &m[i]);
    }
    even(n,m);
    
    
    return 0;
}