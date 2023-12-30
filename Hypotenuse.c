#include <stdio.h>
#include <math.h>

int main() {
    double base, perpendicular, hypotenuse;
    scanf("%lf", &base);
    scanf("%lf", &perpendicular);

    hypotenuse = sqrt(base * base + perpendicular * perpendicular);

    printf("%.2lf
", hypotenuse);

    return 0;
}
