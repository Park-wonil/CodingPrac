#include <stdio.h>

int n,temp;
int nums[100];
void sort1(int *nums){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(nums+i)>*(nums+j)){
                temp = *(nums+i);
                *(nums+i)=*(nums+j);
                *(nums+j)=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(nums+i));
    }
    printf("\n");
}
void sort2(int * nums){
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(nums+i));
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    sort1(nums);
    sort2(nums);
    
    
    return 0;
}