#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char jelszo[100];
    int nagybetu=0;
    int kisbetu=0;
    int szam=0;
    int hossz=0;
    printf("Adj meg jelszavakat '*' vegjelig!\n");

   /*while (strcmp(jelszo,"*")!=0)
    {
        fgets(jelszo,100,stdin);
    }*/
    while (1)
    {
        printf("Jelszo: ");
        fgets(jelszo,100,stdin);
        
            
        if(strcmp(jelszo,"*\n")==0)
         {   break;
         }
         for(i=0; i<strlen(jelszo); i++){
         if(jelszo[i]>=65 && jelszo[i]<=90 )
                {
                    nagybetu++;
                }
       if(jelszo[i]>=97 && jelszo[i]<=122 )
                {
                    kisbetu++;
                }
        if(jelszo[i]>=48 && jelszo[i]<=57 )
                {
                    szam++;
                }
        if(strlen(jelszo)>=8)
        {
            hossz++;
        }
        
    
    }
    if(nagybetu>0 && kisbetu >0 && szam>0 && hossz>0)
         {
            printf("Eros jelszo!\n");
         }
         else
         {
            printf("Gyenge jelszo!\n");
         }
    szam=0;
    kisbetu=0;
    nagybetu=0;
    }
    
    return 0;
}