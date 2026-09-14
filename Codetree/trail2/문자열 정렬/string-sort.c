#include <stdio.h>
#include <string.h>

char str[101],temp;
void sort(char *str){ //*str은 첫번째 문자
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]>str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);//전체를 출력하기때문에 전체주소를 보내야함
}

int main() {
    scanf("%s", str);
    sort(str);//전체를 출력하기때문에 전체주소를 보내야함
    return 0;
}