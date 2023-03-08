#include <stdio.h>
#define PI 3.14159265358979323846

double felsz(double r) {
    return 4 * PI * r * r;
}

double terf(double r) {
    return (4.0 / 3.0) * PI * r * r * r;
}

int main() {
    double r;

    printf("Add meg a kor sugarat: ");
    scanf("%lf", &r);

    double felszin= felsz(r);
    double terfogat = terf(r);

    printf("Felszin: %lf\n", felszin);
    printf("Terfogat: %lf\n", terfogat);

    return 0;
}
