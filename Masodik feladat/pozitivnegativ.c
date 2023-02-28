#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adjon meg egy egesz szamot, ami nem nulla! ");
    int a;
    int szamlalo=0;
    int szamlalo2=0;
    scanf("%d", &a);

    while(a!=0){
        printf("Remek! Adj meg meg egyet! ");
        if(a>0){
            szamlalo++;
        }else{
        szamlalo2++;
        }
        scanf("%d", &a);

    }

    printf("\nPozitiv elemek szama: %d", szamlalo);
    printf("\nNegativ elemek szama: %d", szamlalo2);
    return 0;
}

