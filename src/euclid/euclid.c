#include "euclid.h"

long extendedEuclideanAlgorithm(long a, long b, long *x, long *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;

        return a;
    }

    long x1;
    long y1;

    long d = extendedEuclideanAlgorithm(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return d;
}

long euclideanAlgorithm(long a, long b) {
    return b == 0 ? a : euclideanAlgorithm(b, a % b);
}
