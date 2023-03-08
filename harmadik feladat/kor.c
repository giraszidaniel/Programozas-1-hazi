#include <stdio.h>
#define PI 3.14159265358979323846

double ter(double r) {
    return PI * r * r;
}

double ker(double r) {
    return 2 * PI * r;
}

int main() {
    double r;

    printf("Add meg a kor sugarat: ");
    scanf("%lf", &r);

    double terulet = ter(r);
    double kerulet = ker(r);

    printf("Terulete: %lf\n", terulet);
    printf("Kerulete: %lf\n", kerulet);

    return 0;
}
