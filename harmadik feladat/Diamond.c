#include <stdio.h>
#include <stdlib.h>

int main()
{
    int magassag;
    printf("Add meg a gyemant magassagat: ");
    scanf("%d", &magassag);

    while(magassag<=0 || magassag % 2 ==0){
    if (magassag <= 0 || magassag % 2 == 0) {
        printf("Ez nem jo szam! Adj meg egy masikat! \n");
        scanf("%d", &magassag);
    }
    }

    for (int sor = 1; sor <= magassag / 2 + 1; sor++) {
        for (int szokoz = 1; szokoz <= magassag / 2 + 1 - sor; szokoz++) {
            printf(" ");
        }
        for (int csillag = 1; csillag <= 2 * sor - 1; csillag++) {
            printf("*");
        }
        printf("\n");
    }


    for (int sor = magassag / 2; sor >= 1; sor--) {
        for (int szokoz = 1; szokoz <= magassag / 2 + 1 - sor; szokoz++) {
            printf(" ");
        }
        for (int csillag = 1; csillag <= 2 * sor - 1; csillag++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
