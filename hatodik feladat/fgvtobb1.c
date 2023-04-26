#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

struct fgvtobb1
{
    /* data */
};


void kiszamol(int tomb[MAX], double *atlag, int *min, int *max)
{
    int i;
    *atlag=0;
    *min=tomb[0];
    *max=tomb[0];
    for(i=0; i<MAX; i++)
    {
        *atlag+=tomb[i];
    }
    for(i=1; i<MAX; i++)
    {
        if(*min>tomb[i])
        {
            *min=tomb[i];
        }
        if(*max<tomb[i])
        {
            *max=tomb[i];
        }
    }
    *atlag=*atlag/(double)i;
}

int main()
{
    srand(time(0));
    int t[MAX];
    int i;
    double keszatlag=0;
    int keszmin=0;
    int keszmax=0;

    for(i=0; i<MAX; i++)
    {
        t[i]=rand() % 90+10;
    }
    printf("A tomb elemei: ");
   printf("%d", t[0]);
   for(i=1; i<MAX; i++)
    {
        printf(", %d", t[i]);
        
    }
    kiszamol(t, &keszatlag, &keszmin, &keszmax);
    printf("Legkisebb elem: %d\n", keszmin);
    printf("Legnagyobb elem: %d\n", keszmax);
    printf("Az elemek atlaga: %.1lf\n", keszatlag);
    return 0;
}