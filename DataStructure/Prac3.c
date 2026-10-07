#define MAX 10
#include <stdio.h>
#include <string.h>
int insertElement(int L[],int n,int x){
    int i,k=0,move = 0;//move는 이동횟수
    for(i=0;i<n;i++){
        if(L[i]<=x && L[i+1]>=x){//크기순이므로 사잇값찾기 ㅎㅎ
            k = i+1;
            break;
        }
    }
    if(i==n){//사잇값이 없으면 맨뒤에 삽입
        k = n;

    }
    for(i=n;i>k;i--){//뒤에서부터 한칸씩 이동
        L[i] = L[i-1];
        move++;
    }
    L[k]=x;
    return move;//이동횟수
}
int deleteElement(int L[],int n,int x){
    int i,k,move =0;//move는 이동횟수
    for(i=0;i<n;i++){
        if(L[i] == x){
            k=i;
            break;
        }
}
    if(i==n){//삭제할 값이 없으면
        return move = n;

    }
    for(i=k;i<n-1;i++){//앞에서부터 한칸씩 이동
        L[i] = L[i+1];
        move++;
    }
    return move;//이동횟수
}
int main(){
    int list[MAX]= {10,20,30,50,60,70};
    int i,move,size = 6;//size는 현재 리스트의 크기
    printf("삽입전 선형리스트:");
    for(i=0;i<size;i++){
        printf("%3d",list[i]);
    }
    printf("\n 원소의개수 : %d",size);
    move = insertElement(list,size,40);
    printf("\n 삽입후 선형리스트 :");
    for(int i=0;i<size+1;i++){
        printf("%3d",list[i]);
    }
    printf("\n 원소의 개수 : %d",++size);
    printf("\n 자리 이동 횟수 : %d",move);
    move = deleteElement(list,size,40);
        if(move == size){
            printf("\n삭제할것없음");
        }else{
            printf("\n삭제후 선형리스트 :");
            for(int i=0;i<size-1;i++){
                printf("%3d ",list[i]);
            }
            printf("\n삭제후 원소개수 %d", --size);
            printf("\n 자리이동횟수 %d",move);
        }
    

    return 0;

}