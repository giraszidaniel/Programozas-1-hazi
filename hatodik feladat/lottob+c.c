#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int beker = 0, also, felso = 0;
    printf("Hany db random szamot kersz?\n");
    scanf("%d", &beker);
    printf("Also hatar: ");
    scanf("%d", &also);
    also++;
    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);
    int i;
    int t[felso+1]; 
    int tomb[beker];
    
    for(i = 0;i<felso;i++)t[i] = 0;
    for(i = 0;i<beker;i++)tomb[i] = 0;

    
    for(i = 0; i<beker;     ) // while(1)
    {
        tomb[i]=rand() % (felso-also)+also;
        if(t[tomb[i]]==0)
        {
            t[tomb[i]]++;
            i++;
        }
    }

    /*
    int generalt = 0;
    while(generalt<beker){
        int rand_szam = rand() % (felso-also)+also;

        if(t[rand_szam]==0)
        {
            t[rand_szam]++;
            tomb[generalt] = rand_szam;
            generalt++;
        }

    }*/
    printf("A generalt szamok: "); 
    for(i=0; i<felso; i++)
    {
        if(t[i]==1)
        {
            printf("%d ",i);
        }
    }

    return 0;
}