#include <stdio.h>

int main() {
    int N,Q,b,s,e,k=0;
    scanf("%d %d",&N,&Q);
    int a,arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<Q;i++){
        scanf("%d",&a);
        if(a==1){
            scanf("%d",&b);
            printf("%d\n",arr[b-1]);
        }else if(a==2){
            k=-1;
            scanf("%d",&b);
            for(int j=0;j<N;j++){
                if(arr[j]==b){
                    k=j;
                    break;
                }
            }printf("%d\n",k+1);
        }else if(a==3){
            scanf("%d %d",&s,&e);
            for(int j=s-1;j<e;j++){
                printf("%d ",arr[j]);
            }printf("\n");
        }
    }
    
    



    return 0;
}
