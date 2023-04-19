#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define MAX_RANDOM 100

int main()
{
    int numbers[ARRAY_SIZE];
    int i, j, rand_num;
    int is_different;

    srand(time(NULL));

    for(i = 0; i < ARRAY_SIZE; i++)
    {

        do {
            rand_num = rand() % MAX_RANDOM + 1;
            is_different = 1;
            for(j = 0; j < i; j++)
            {
                if(numbers[j] == rand_num)
                {
                    is_different = 0;
                    break;
                }
            }
        } while (!is_different);

        numbers[i] = rand_num;
    }


    for(i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
