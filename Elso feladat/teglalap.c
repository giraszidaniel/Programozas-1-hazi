#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Adja meg a teglalap egyik oldalat! ");
    scanf("%d", &a);
    printf("Adja meg a teglalap masik oldalat! ");
    scanf("%d", &b);
    int kerulet=2*a+2*b;
    printf("A teglalap terulete: %d\n", a*b);
    printf("A teglalap kerulete: %d", kerulet);
    return 0;
}