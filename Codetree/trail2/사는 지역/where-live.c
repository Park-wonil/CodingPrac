#include <stdio.h>
#include <string.h>
typedef struct inf{
    char name[11];
    char address[11];
    char region[11];
}inf;


int main() {
    int n,idx=0;
    scanf("%d", &n);
    inf a[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", a[i].name, a[i].address, a[i].region);
    }
    for (int i = 1; i < n; i++) {
        if(strcmp(a[i].name,a[idx].name)>0){
            idx = i;
        }
    }
    printf("name %s\naddr %s\ncity %s",a[idx].name,a[idx].address,a[idx].region);



    return 0;
}
