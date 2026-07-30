#include <stdio.h>
#include<string.h>

char str[101],temp;
void sort1(char *str){
    for(int i=0;i<strlen(str)-1;i++){
        for(int j=i+1;j<strlen(str);j++){
            if((int)*(str+i)>(int)*(str+j)){
                temp = *(str+j);
                *(str+j)= *(str+i);
                *(str+i)= temp; 
            }
        }
    }
    printf("%s",str);
}
int main() {
    scanf("%s", str);
    sort1(str);
    return 0;
}