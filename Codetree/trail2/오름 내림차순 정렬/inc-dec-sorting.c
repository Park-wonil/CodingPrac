#include <stdio.h>

int n,temp;
int nums[100],nums2[100];
void sort1(int *nums){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(nums+i)>*(nums+j)){
                temp = *(nums+i);
                *(nums+i) = *(nums+j);
                *(nums+j) = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }

}
void sort2(int *nums){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(nums+i)<*(nums+j)){
                temp = *(nums+j);
                *(nums+j) = *(nums+i);
                *(nums+i) = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    sort1(nums); //배열의 첫번쨰 주소를 넘긴다
    printf("\n");
    sort2(nums);

    return 0;
}