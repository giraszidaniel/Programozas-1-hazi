#include <stdio.h>

int main(){
    int n;
    int i;
    int szamok[99];
    int kulonbozo = 0;

    for(i = 0;i<99;i++){
        szamok[i] = 0;
    }
    printf("Adj meg 0 vegjelig egesz szamokat az [1, 99] intervallumbol!\n");
        
    while(1){
        printf("Szam: ");
        scanf("%d",&n);
        if(n == 0){
            break;
        }else{
            if(n<1 || n>99){
                printf("Ez a szam kivul esik az elfogadhato intervallumon!\n");
            }else{
                szamok[n-1] = 1;
            }
        }

    }

    for(i = 0;i<99;i++){
        if(szamok[i]>0){
            kulonbozo++;
        }
    }

    printf("\n%d db kulonbozo szam lett megadva.\n",kulonbozo);
    if(kulonbozo!=0){
        printf("Ezek (novekvo sorrendben):");
        int elso = 0;
        for(i = 0;i<99;i++){
            if(szamok[i]>0){
                if(elso == 0){
                    printf(" %d",i+1);
                    elso = 1;
                    continue;
                }
                
                printf(", %d",i+1);
                
                
            }
        }
    }
    printf("\n");
    return 0;
}