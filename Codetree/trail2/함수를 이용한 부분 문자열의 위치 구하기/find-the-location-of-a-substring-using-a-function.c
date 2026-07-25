#include <stdio.h>
#include <string.h>

char str[1001];
char target[1001];

int find(char *str, char *target) {
    int n = strlen(str);
    int m = strlen(target);

    for (int i = 0; i <= n - m; i++) {
        int same = 1;

        for (int j = 0; j < m; j++) {
            if (str[i + j] != target[j]) {
                same = 0;
                break;
            }
        }

        if (same)
            return i;
    }

    return -1;
}

int main() {
    scanf("%s", str);
    scanf("%s", target);

    printf("%d\n", find(str, target));

    return 0;
}