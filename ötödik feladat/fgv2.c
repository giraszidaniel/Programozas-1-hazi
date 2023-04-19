#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define MIN_VALUE 10
#define MAX_VALUE 99

typedef struct {
    int min_val;
    int max_val;
    float avg_val;
} ArrayStats;

void fill_array(int arr[]) {
    int i;
    srand(time(NULL));
    for (i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    }
}

ArrayStats get_array_stats(int arr[]) {
    int i;
    ArrayStats stats;
    int sum = 0;
    stats.min_val = arr[0];
    stats.max_val = arr[0];
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] < stats.min_val) {
            stats.min_val = arr[i];
        }
        if (arr[i] > stats.max_val) {
            stats.max_val = arr[i];
        }
        sum += arr[i];
    }
    stats.avg_val = (float)sum / ARRAY_SIZE;
    return stats;
}

void print_array(int arr[]) {
    int i;
    printf("A tömb elemei: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[ARRAY_SIZE];
    ArrayStats stats;
    fill_array(arr);
    print_array(arr);
    stats = get_array_stats(arr);
    printf("Legkisebb elem: %d\n", stats.min_val);
    printf("Legnagyobb elem: %d\n", stats.max_val);
    printf("Az elemek átlaga: %.1f\n", stats.avg_val);
    return 0;
}