#include<stdio.h>
#include <stdlib.h>

typedef struct {
    long val, rect;
} coord;

int cmpfunc (const void * a, const void * b) {
   return ( ((coord*)a)->val - ((coord*)b)->val );
}

void print(coord arr[]) {
    for(long i = 0; i < 4; i++) {
        printf("%ld:%ld ", arr[i].val, arr[i].rect);
    }
}

void printBoth(coord x[], coord y[]) {
    print(x);
    printf(" | ");
    print(y);
    printf("\n");
}

long solve(coord* x, coord* y) {
    long areaSum = abs((x[0].val - x[1].val)) * abs((y[0].val - y[1].val)) 
                + abs((x[2].val - x[3].val)) * abs((y[2].val - y[3].val));

    qsort(x, 4, sizeof(coord), cmpfunc);
    qsort(y, 4, sizeof(coord), cmpfunc);

    if (x[0].rect == x[1].rect || y[0].rect == y[1].rect) return areaSum;
    return areaSum - (x[2].val - x[1].val) * (y[2].val - y[1].val);
}

int main() {
    coord x[4], y[4];
    for(long i = 0; i < 8; i++) {
        coord *c = (i % 2) ? &y[i/2] : &x[i/2];
        scanf("%ld", &c->val);
        c->rect = i >= 4;
    }
    printf("%ld\n", solve(x, y));
}