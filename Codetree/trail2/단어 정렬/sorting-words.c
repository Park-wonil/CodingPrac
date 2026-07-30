#include <stdio.h>
#include <string.h>

char word_list[101][101];
void sort(char (*word_list)[101],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(word_list[i],word_list[j])>0){
                char temp[101];
                strcpy(temp,word_list[j]);
                strcpy(word_list[j],word_list[i]);
                strcpy(word_list[i],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",word_list[i]);
    }

}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", word_list[i]);
    }
    
    sort(word_list,n);
    return 0;
}