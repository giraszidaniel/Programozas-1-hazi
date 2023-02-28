#include <stdio.h>
#include <stdlib.h>

int main()
{
   int szam;
   printf("Adjon meg egy szamot! ");
   scanf("%d", &szam);
   for(int i=szam; i>=1; i--){
        if(i%2==1){
            printf("%d\n", i);
        }
   }
    return 0;
}

