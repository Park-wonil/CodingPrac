#include <stdio.h>
#include <string.h>
typedef struct product{
    char input_id[11];
    int input_code;
}pro;

pro a[2];
int main() {
    pro *p;
    p = a;
    scanf("%10s %d", (p+1)->input_id, &(p+1)->input_code);
    strcpy(p->input_id,"codetree");
    p->input_code = 50;
    printf("product %d is %s\nproduct %d is %s",(p)->input_code,(p)->input_id,(p+1)->input_code,(p+1)->input_id);

    
    return 0;
}