#include <stdio.h>

int main() {
    int aliceRating, bobRating;
    int aliceScore = 0, bobScore = 0;

    // Input Alice's and Bob's ratings one by one
    for (int i = 0; i < 3; i++) {
        scanf("%d", &aliceRating);
        scanf("%d", &bobRating);

        if (aliceRating > bobRating) {
            aliceScore++;
        } else if (aliceRating < bobRating) {
            bobScore++;
        }
    }

    // Output the result
    printf("%d %d\n", aliceScore, bobScore);

    return 0;
}

