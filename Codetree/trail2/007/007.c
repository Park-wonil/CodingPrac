#include <stdio.h>
#include <string.h>
char secret_code[11];
struct Wonil{
    int time;
    char meeting_point;
    char secret_code[11];

};
int main() {
    char meeting_point;
    int time;

    scanf("%s %c %d", secret_code, &meeting_point, &time);

    struct Wonil s;
    s.time = time;
    strcpy(s.secret_code,secret_code);
    s.meeting_point = meeting_point;
    printf("secret code : %s\n", s.secret_code);
    printf("meeting point : %c\n", s.meeting_point);
    printf("time : %d",s.time);


    
    return 0;
}