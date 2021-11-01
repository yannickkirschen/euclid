#include <stdio.h>
#include <stdlib.h>

#include "euclid/euclid.h"

int main(int argc, char *argv[]) {
    if (argc == 3) {
        long a = strtol(argv[1], NULL, 10);
        long b = strtol(argv[2], NULL, 10);

        if (a < b) {
            long tmp = a;
            a = b;
            b = tmp;
        }

        long x;
        long y;

        long gcd = extendedEuclideanAlgorithm(a, b, &x, &y);

        printf("gcd(%ld, %ld) = %ld\n", a, b, gcd);

        if (x >= 0) {
            printf("%ld = %ld * %ld + %ld * %ld\n", gcd, a, b, x, y);
        } else {
            printf("%ld = %ld * %ld - %ld * %ld\n", gcd, a, b, x * -1, y);
        }
    } else {
        printf("Usage: euclid <a> <b>\n\n");
    }
}
