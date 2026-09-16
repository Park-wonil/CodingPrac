#include <stdio.h>

int n, k;
int nums[1000],temp;
void sort(int *nums){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    printf("%d", nums[k-1]);
    
}
int main(){
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    sort(nums);
    return 0;
}