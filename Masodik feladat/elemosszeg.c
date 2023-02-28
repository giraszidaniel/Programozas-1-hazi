#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adjon meg egy egesz szamot, ami nem nulla! ");
    int a;
    int osszeg=0;
    scanf("%d", &a);
    osszeg=osszeg+a;
    while(a!=0){
        printf("Remek! Adj meg meg egyet! ");
        scanf("%d", &a);
        osszeg=osszeg+a;
    }

    printf("\nA megadott elemek osszege: %d", osszeg);
    return 0;
}
