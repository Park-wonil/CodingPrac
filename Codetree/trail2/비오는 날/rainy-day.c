#include <stdio.h>
#include <string.h>
int n,cnt=0;
typedef struct inf{
    char date[20], day[20], weather[20];
}inf;

int main() {
    scanf("%d", &n);
    inf a[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", a[i].date, a[i].day, a[i].weather);
    }
    int min=-1;
    for(int i=0;i<n;i++){
        if (strcmp(a[i].weather, "Rain") == 0) {
            if (min == -1 || strcmp(a[i].date, a[min].date) < 0) {
                min = i;
    }
}
    }
    printf("%s %s %s",a[min].date,a[min].day,a[min].weather);
    return 0;
}