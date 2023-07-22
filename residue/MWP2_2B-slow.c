// This version is highly suboptimal.

#include<stdio.h>

// u^s mod d

void solve(int u, int s, int d) {
    int r = u % d;
    int rcpy = r;
    while(s-- - 1) r = (r*rcpy) % d;
    printf("%d\n", r);
}

int main() {
    int u, s, d;
    while(1) {
        scanf("%d %d %d", &u, &s, &d);
        if (u == 0 && s == 0 && d == 0) break;
        solve(u, s, d);
    }
}