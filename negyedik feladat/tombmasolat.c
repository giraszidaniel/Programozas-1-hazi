#include <stdio.h>


int main(){
    int n;
    int i;
    printf("Hany db szamot szeretnel bevinni?\n");
    scanf("%d",&n);

    int tomb[n];
    int tomb_masolat[n];
    for(i = 0;i<n;i++){
        printf("%d. szam: ",i+1);
        scanf("%d",&tomb[i]);
    }


    for(i = 0;i<n;i++){
        if(tomb[i]<0){
            tomb_masolat[i] = -1*tomb[i]; 
            continue;
        }
        tomb_masolat[i] = tomb[i];
    }
    printf("\n");
    printf("A bevitt szamok abszolutertekei:");

    for(i = 0;i<n;i++){
        printf(" %d",tomb_masolat[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("\n");

    printf("A megadott szamok:");

    for(i = 0;i<n;i++){
        printf(" %d",tomb[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("\n");

    return 0;
}