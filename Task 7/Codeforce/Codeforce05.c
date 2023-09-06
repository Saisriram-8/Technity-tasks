#include <stdio.h>

int main() {
    char c;
    int consecutive = 1; // Initialize consecutive count to 1 (for the first character)
    int is_dangerous = 0;

    while (scanf(" %c", &c) == 1) { // Read characters until the end of input
        if (c == '0' || c == '1') {
            if (c == '0') {
                if (consecutive >= 7) {
                    is_dangerous = 1;
                    break;
                }
                consecutive = 1; // Reset consecutive count for '0'
            } else { // c == '1'
                if (consecutive >= 7) {
                    is_dangerous = 1;
                    break;
                }
                consecutive++; // Increment consecutive count for '1'
            }
        } else {
            // If a character other than '0' or '1' is encountered, reset consecutive count
            consecutive = 0;
        }
    }

    if (is_dangerous) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

