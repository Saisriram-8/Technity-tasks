#include <stdio.h>

void staircase(int n) {
    for (int row = 1; row <= n; row++) {
        int spaces = n - row;
        int hashes = n - spaces;

        // Print leading spaces
        for (int i = 1; i <= spaces; i++) {
            printf(" ");
        }

        // Print '#' symbols
        for (int i = 1; i <= hashes; i++) {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    staircase(n);

    return 0;
}

