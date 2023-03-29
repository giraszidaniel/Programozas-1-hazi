#include <stdio.h>
#include "prog1.h"
#include <string.h>

void muvelet(int a, char abc[])
{
    int i;
    
    
    for(i=0; i<26 ; i++ )
    {
        abc[i]=a;
        a++;
    }
    abc[26]='\0';
    
}

int main()
{
    int a=97;
    int i;
    char abc[26+1];
    muvelet(a, abc);
    
    for(i=0; i<26; i++ )
    {
        printf("%c ", abc[i]);
    }
    printf("%s\n",abc);
    return 0;
}