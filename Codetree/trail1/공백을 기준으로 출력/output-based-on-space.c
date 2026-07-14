#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char ans1[100], ans2[100];

    fgets(str1, 200, stdin);
    fgets(str2, 200, stdin);

    int idx = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ' && str1[i] != '\n')
            ans1[idx++] = str1[i];
    }
    ans1[idx] = '\0';

    idx = 0;
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ' && str2[i] != '\n')
            ans2[idx++] = str2[i];
    }
    ans2[idx] = '\0';

    printf("%s%s", ans1, ans2);

    return 0;
}