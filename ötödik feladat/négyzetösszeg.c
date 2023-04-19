#include <stdio.h>

int negyzetosszeg()
{
    int i;
    int sum=0;
      for(i=1; i<=100; i++)
   {
        sum=sum+i*i;
   }
   
return sum;
}

int osszegszorzat()
{
    int i;
    int sum=0;
    int osszegszorzat1=0;
     for(i=1; i<=100; i++)
    {
        sum=sum+i;
    }
    osszegszorzat1=sum*sum;
    return osszegszorzat1;
}

int main()
{
    
  int sum= osszegszorzat();
    

   
   int sum2 = negyzetosszeg();
    printf("%d\n", sum-sum2);
    return 0;
}