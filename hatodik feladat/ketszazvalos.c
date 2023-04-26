#include <stdio.h>

int main() {
    FILE *inputFile;
    FILE *outputFile;
    double number;
    int count = 0;

    // Az in.txt fájl megnyitása olvasásra
    inputFile = fopen("in.txt", "r");
    if (inputFile == NULL) {
        printf("Hiba: Az in.txt fájl nem található vagy nem nyitható meg!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    // Az out.txt fájl megnyitása írásra
    outputFile = fopen("out.txt", "w");
    if (outputFile == NULL) {
        printf("Hiba: Az out.txt fájl nem nyitható meg!\n");
        fclose(inputFile);
        return 1;
    }

    printf("# 0,5-nél nagyobb számok szűrése...\n");

    // Számok beolvasása és szűrés
    while (fscanf(inputFile, "%lf", &number) != EOF) {
        if (number > 0.5) {
            fprintf(outputFile, "%lf\n", number);
            count++;
        }
    }

    printf("# szűrés vége\n");

    // Fájlok bezárása
    fclose(inputFile);
    fclose(outputFile);
    printf("# out.txt bezárva\n");

    printf("# out.txt-be kiírt számok mennyisége: %d db\n", count);

    return 0;
}