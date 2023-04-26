#include <stdio.h>

int main() {
    FILE *fp;
    double num, sum = 0;

    fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL) {
        printf("Hiba! Az allomanyt nem lehet megnyitni!");
        return 1;
    }

    while (fscanf(fp, "%lf", &num) == 1) {
        sum += num;
    }

    printf("Az allomanyban talalhato szamok osszege: %.20lf", sum);

    fclose(fp);

    return 0;
}