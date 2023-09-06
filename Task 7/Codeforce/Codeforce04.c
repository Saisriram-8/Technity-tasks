#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = 0;

    for (int i = 0; i < n; i++) {
        char operation;
        scanf(" %c", &operation);  // Notice the space before %c to skip leading whitespace

        if (operation == '+' || operation == '1') {
            x++;
        } else if (operation == '-' || operation == '0') {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}

