#include<stdio.h>

// u^s mod d

long solve(long u, long s, long d) {
    if (s == 0) return 1 % d;
    long p = solve(u, s/2, d);
    p = (p * p) % d;
    if (s % 2 == 1) p = (p * u) % d;
    return p;
}

int main() {
    long u, s, d;
    while(1) {
        scanf("%ld %ld %ld", &u, &s, &d);
        if (u == 0 && s == 0 && d == 0) break;
    	printf("%ld\n", solve(u, s, d));
    }
}
