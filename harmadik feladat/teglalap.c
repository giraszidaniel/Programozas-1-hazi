#include <stdio.h>
#include <stdlib.h>


int kerulet(int a, int b){
int kerulet=2*a+2*b;
return kerulet;
}

int terulet(int a, int b){
return a*b;}

int main()
{
    int a,b;
    printf("Adja meg a teglalap egyik oldalat! ");
    scanf("%d", &a);
    printf("Adja meg a teglalap masik oldalat! ");
    scanf("%d", &b);
    int result1=kerulet(a,b);
    int result2=terulet(a,b);



    printf("A teglalap terulete: %d\n", result2);
    printf("A teglalap kerulete: %d", result1);
    return 0;
}
