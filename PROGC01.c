#include<stdio.h>

int main() {
    int ret = 0, c;
    while((c = getchar()) != EOF) if (c == '\n') ret++;
    printf("%d\n", ret+1);
}