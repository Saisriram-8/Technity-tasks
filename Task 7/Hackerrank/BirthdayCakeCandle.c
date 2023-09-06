#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);

    int max_height = 0;
    int count = 0;

    for (i = 0; i < n; i++) {
        int height;
        scanf("%d", &height);

        if (height > max_height) {
            max_height = height;
            count = 1;
        } else if (height == max_height) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

