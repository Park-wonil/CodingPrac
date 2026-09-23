#include <stdio.h>

typedef struct {
    char code_name;
    int score;
} User;

User users[5];

int main(){
    int i;
    User *p = users;
    for(i = 0; i < 5; i++){
        scanf(" %c %d", &(p+i)->code_name, &(p+i)->score);
    }
    int min_idx = 0;
    for(i =1;i<5;i++){
        if((p+i)->score<(p+min_idx)->score){
            min_idx = i;
        }
    }
    printf("%c %d",(p+min_idx)->code_name,(p+min_idx)->score);

    
    return 0;
}