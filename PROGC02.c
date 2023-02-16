#include<stdio.h>

int main() {
    int ret[256] = {0};
    int c;
    while((c = getchar()) != EOF) {
        ret[c]++;
    }
    for(int i = 0; i < 256; i++) if (ret[i]) 
        printf("%d %d\n", i, ret[i]);
}