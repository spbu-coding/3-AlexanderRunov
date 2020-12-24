#include <stdio.h>
#include <math.h>


int main() {
    double x1, x2, delta;
    x1 = 0;
    x2 = 2;
    delta = 0.0001;
    while (sqrt(pow(x1 - 1, 2) + pow(x2 - 1, 2)) > 0.000001) {
        delta /= 2;
        x2 = (0.0001 + delta) / 0.0001;
        x1 = 2 - x2;
        printf("(%.15f, %.15f) %.15f %.15f\n", x1, x2, delta, sqrt(pow(x1 - 1, 2) + pow(x2 - 1, 2)));
    }
    return 0;
}
