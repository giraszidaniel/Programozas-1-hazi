#include <stdio.h>
#include <stdlib.h>

int main()
{
    int osszeg=0;
    int i;
    for (i=1; i<1000; i++){
        if(i%3==0 || i%5==0){
            osszeg+=i;
        }
    }
    printf("Az osszeg: %d", osszeg);
    return 0;
}
