#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i, min_len;
    if (argc < 2) {
        fprintf(stderr, "Hiba: nincs eleg argumentum!\n");
        return 1;
    }
    
    min_len = strlen(argv[1]);
    for (i = 2; i < argc; i++) {
        if (strlen(argv[i]) < min_len) {
            min_len = strlen(argv[i]);
        }
    }
    
    for (i = 1; i < argc; i++) {
        if (strlen(argv[i]) ==  min_len) {
            printf("%s\n",argv[i]);
        }
    }
    return 0;
}
