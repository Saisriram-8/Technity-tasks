#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int advanced = 0;
    int score;

    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        if (i + 1 == k) {
            // Store the score of the k-th participant
            score = score;
        }
        if (score > 0 && score >= score) {
            advanced++;
        }
    }

    printf("%d\n", advanced);

    return 0;
}

