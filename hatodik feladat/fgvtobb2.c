#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

typedef struct 
{
    int min;
    int max;
    double atlag;
}Szamolas;

    Szamolas kiszamol(int tomb[MAX])
    {
        int i, min1, max1;
        double atlag1=0;
        min1=tomb[0];
        max1=tomb[0];
        for(i=1; i<MAX; i++)
        {
            atlag1+=tomb[i];
            if(min1>tomb[i])
            {
                min1=tomb[i];
            }
            if(max1<tomb[i])
            {
                max1=tomb[i];
            }
        }
        atlag1=atlag1/(double)i;

        //Szamolas eredmeny={min1, max1, atlag1};
        Szamolas eredmeny;
        eredmeny.min = min1;
        eredmeny.max = max1;
        eredmeny.atlag = atlag1;
        return eredmeny;
    }

int main()
{
    int tomb[MAX];
    int keszmin, keszmax;
    double keszatlag;
    int i;
    for(i=0; i<MAX; i++)
    {
        tomb[i]= rand() % 90+10;
    }
    printf("A tomb elemei: ");
    printf("%d",tomb[0]);
    for(i=1; i<MAX; i++)
    {
        printf(", %d", tomb[i]);
    }
    printf("\n");
    Szamolas veg=kiszamol(tomb);
    printf("Legkisebb elem: %d\n", veg.min);
    printf("A legnagyobb elem: %d\n", veg.max);
    printf("Az elemek atlaga: %.1lf\n", veg.atlag);
    return 0;
}