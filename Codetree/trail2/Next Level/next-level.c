#include <stdio.h>

struct wonil {
    char id[11];
    int level;
};
int main(){
    struct wonil user1 = {"codetree", 10};
    struct wonil user2;
    struct wonil *p1 = &user1;
    struct wonil *p2 = &user2;
    scanf("%s %d", p2->id, &p2->level);
    printf("user %s lv %d\n",p1->id,p1->level);
    printf("user %s lv %d",p2->id,p2->level);
    
    
    return 0;
}