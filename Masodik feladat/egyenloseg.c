#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1, n2;
   printf("Adja meg az egyik szamot! ");
   scanf("%d", &n1);
   printf("Adja meg a masik szamot! ");
   scanf("%d", &n2);
   char a='>';
   char b='<';
   char c='=';
   if(n1>n2){
    printf("%c", a);
   }
   else if(n1==n2){
    printf("%c", c);
   }
   else{
    printf("%c", b);
   }
    return 0;
}
