#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    int max_str_len = 0,szoszam = 0;
    printf("Adj meg szavakat '*' vegjelig!\n");
    while(1){
        printf("Szo: ");
        fgets(str,1000,stdin);
        if(str[0] == '*'){
            break;
        }else{
            szoszam++;
            if(strlen(str)-1 > max_str_len ){
                max_str_len = strlen(str)-1;
            }
        }

    }
    printf("\n%d db szot adtal meg. A leghosszabb szo %d karakterbol all.\n",szoszam,max_str_len);
    return 0;
}