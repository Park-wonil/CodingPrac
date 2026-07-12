#include <stdio.h>

int main() {
    int a=0,b=0,c=0,d=0;
    int arr[3];
    char arr2[3];
    for(int i=0;i<3;i++){
        scanf(" %c %d",&arr2[i],&arr[i]);
        if(arr[i]>=37 && arr2[i]=='Y'){
            a++;
        }else if(arr[i]>=37 && arr2[i]=='N'){
            b++;
        }else if(arr[i]<37 && arr2[i]=='Y'){
            c++;
        }else{
            d++;
        }
    }
    if(a>=2){
        printf("%d %d %d %d E",a,b,c,d);
    }else{
        printf("%d %d %d %d",a,b,c,d);
    }
    
    return 0;
}