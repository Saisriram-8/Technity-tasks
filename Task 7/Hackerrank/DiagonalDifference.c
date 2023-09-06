#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d", &n);

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int num;
            scanf("%d", &num);

            if (i == j) {
                primaryDiagonalSum += num;
            }
            if (i + j == n - 1) {
                secondaryDiagonalSum += num;
            }
        }
    }

    int result = abs(primaryDiagonalSum - secondaryDiagonalSum);
    printf("%d\n", result);

    return 0;
}

