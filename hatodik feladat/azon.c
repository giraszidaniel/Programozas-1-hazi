#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_valid_c_identifier(const char* input) {
    if (!isalpha(input[0]) && input[0] != '_' ||strlen(input)<1)  {
        return 0;
    }
    for (int i = 1; input[i] != '\0'; i++) {
        if (!isalnum(input[i]) && input[i] != '_' && !isdigit(input[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char input[1000];
    while (1) {
        printf("Input: ");

        fgets(input,1000,stdin);
        input[strlen(input)-1] = '\0';
        if (strcmp(input,"*") == 0) {
            break;
        }
        if (is_valid_c_identifier(input)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
