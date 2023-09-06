#include <stdio.h>
#include <math.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    // Calculate the number of flagstones needed for the width and length
    long long width_flagstones = (long long)ceil((double)n / a);
    long long length_flagstones = (long long)ceil((double)m / a);

    // Calculate the total number of flagstones
    long long total_flagstones = width_flagstones * length_flagstones;

    printf("%lld\n", total_flagstones);

    return 0;
}

