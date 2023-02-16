#include<stdio.h>

int main() {
    long tmp = 0, total = 0, n;
    while(EOF != scanf("%ld", &n)) {
        if (n == 0) {
            printf("%ld\n", tmp);
            tmp = 0;
        } else {
            tmp += n;
            total += n;
        }
    }
    printf("%ld\n", total);
}