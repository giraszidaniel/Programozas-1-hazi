#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void muvelet(int *tomb)
{
    int i;
    int min=tomb[0];
    int max=tomb[0];
    int sum=0;
   for( i=1; i<=10; i++)
   {
        sum+=tomb[i];
        if(min>tomb[i])
        {
            min=tomb[i];
        }
        if(max<tomb[i])
        {
            max=tomb[i];
        }
   }
    double atlag=(double)sum/(double)i;
   printf("A legkisebb elem: %d\n", min);
   printf("A legnagyobb elem: %d\n", max);
   printf("Az elemek atlaga: %.1lf\n", atlag);
}

int main()
{
    srand(time(0));
    int tomb[10];
    for(int i=0; i<10; i++)
    {
        tomb[i]= rand ()% 89+10;
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\n", tomb[i]);
    }
    muvelet(tomb);
    return 0;
}