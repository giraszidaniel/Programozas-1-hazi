#include <stdio.h>


int main() {
    long long int szam;
    printf("Szam: ");
    scanf("%lld", &szam);
    
    int osszeg = 0;
    while (szam > 0) {
        int jegy = szam % 10;
        osszeg += jegy;
        szam /= 10;
    }
    
    printf("A szamjegyek osszege: %d", osszeg);
    
    return 0;
}