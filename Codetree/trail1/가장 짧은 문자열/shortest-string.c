#include <stdio.h>

int main() {
    int cnt1=0,cnt2=0,cnt3=0,max,min;
    char str1[20],str2[20],str3[20];
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    for(int i=0;i<20;i++){
        if(str1[i]=='\0'){
            break;
        }else{
            cnt1++;
        } 
    }
    for(int i=0;i<20;i++){
        if(str2[i]=='\0'){
            break;
        }else{
            cnt2++;
        } 
    }
    for(int i=0;i<20;i++){
        if(str3[i]=='\0'){
            break;
        }else{
            cnt3++;
        } 
    }
    max=cnt1;
    min=cnt1;
    if(max<cnt2){
        max=cnt2;
    }
    if(max<cnt3){
        max=cnt3;
    }
    if(min>cnt2){
        min=cnt2;
    }
    if(min>cnt3){
        min=cnt3;
    }
    printf("%d",max-min);
    return 0;
}