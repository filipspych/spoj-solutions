#include<stdio.h>
#include<math.h>

#define WIDTH 30
#define LOWEST_VALUE -10
#define HIGHEST_VALUE 10

#define VALUE_COUNT (HIGHEST_VALUE - LOWEST_VALUE + 1)

int maxValue(int arr[VALUE_COUNT]) {
    int max = 0;
    for(int i = 0; i < VALUE_COUNT; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int arr[VALUE_COUNT] = {0};
    int n;
    while(scanf("%d", &n) == 1) arr[n - LOWEST_VALUE]++;

    int max = maxValue(arr);
    if (max > 0) {
        for(int i = 0; i < VALUE_COUNT; i++) {
            printf("%4d:|", i + LOWEST_VALUE);
            int asterisk = round((arr[i] * WIDTH) / ((double)max));
            for(int j = 0; j < WIDTH; j++) {
                if(j < asterisk) printf("*");
                else printf(" ");
            }
            printf("|\n");
        }
    }
}
