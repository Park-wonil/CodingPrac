#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
char command[20];
int num;

int main() {

    scanf("%d", &n);

    int size = 0;
    int capacity = 1;

    int *arr = malloc(capacity * sizeof(int));

    for (int i = 0; i < n; i++) {

        scanf("%s", command);

        if (strcmp(command, "push_back") == 0) {

            scanf("%d", &num);

            // 배열 공간이 부족하면 2배로 늘림
            if (size == capacity) {
                capacity *= 2;
                arr = realloc(arr, capacity * sizeof(int));
            }

            arr[size] = num;
            size++;

        } else if (strcmp(command, "pop_back") == 0) {

            size--;

        } else if (strcmp(command, "size") == 0) {

            printf("%d\n", size);

        } else if (strcmp(command, "get") == 0) {

            scanf("%d", &num);

            printf("%d\n", arr[num - 1]);
        }
    }

    free(arr);

    return 0;
}