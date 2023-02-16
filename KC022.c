#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPresent(int *top, int n, int j) {
    for (int i = 0; i < j; i++)
        if (top[i] == n)
            return 1;
    return 0;
}

int minValue(int *top, int j) {
    int min = top[0];
    for (int i = 1; i < j; i++)
        if (top[i] < min)
            min = top[i];
    return min;
}

void replaceMin(int *top, int j, int n) {
    int min = top[0];
    int minIndex = 0;
    for (int i = 1; i < j; i++)
        if (top[i] < min) {
            min = top[i];
            minIndex = i;
        }
    top[minIndex] = n;
}

void solve(int j) {
    int *top = malloc(j * sizeof(int));
    memset(top, 0, j * sizeof(int));

    int n, i = 0;
    while(getchar() != '\n' && scanf("%d", &n) == 1)  {
        if (!isPresent(top, n, j) && minValue(top, j) < n) {
            i++;
            replaceMin(top, j, n);
        }
    }
    
    if (i < j) printf("-\n");
    else printf("%d\n", minValue(top, j));

    free(top);
}

int main() {
    int j;
    while(scanf(" %d", &j) == 1)
        solve(j);
}