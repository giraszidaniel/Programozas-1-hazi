#include <stdio.h>
#include <string.h>


int get_number_of_lines(char * file_name){

    FILE *fp = fopen(file_name, "r");
    if (fp == NULL) {
        fprintf(stderr, "Hiba! Nem lehet megnyitni a fajlt: %s\n", file_name);
        return 2;
    }

    int lineCount = 0;
    char sor[1000];
    while (fgets(sor,1000,fp) != NULL) {
        if (sor[strlen(sor)-1] == '\n') {
            lineCount++;
        }
    }

    fclose(fp);
    return lineCount;
}
int main(int argc, char *argv[]) {
    int lineCount;
    if (argc != 2) {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    lineCount = get_number_of_lines(argv[1]);

    printf("%d\n", lineCount);

    return 0;
}
