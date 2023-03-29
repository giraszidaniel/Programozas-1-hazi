#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int n,also,felso;
    int i;

    printf("Hany db random szamot kersz?\n");
    scanf("%d",&n);
    
    printf("Also hatar: ");
    scanf("%d",&also);
    also++;

    printf("Felso hatar(zart intervallum): ");
    scanf("%d",&felso);
    

    printf("\nA generalt szamok:");
    
    for(i=0;i<n;i++){
        printf(" %d",(rand()%(felso-also))+also);
    }
    printf("\n");
    return 0;
}