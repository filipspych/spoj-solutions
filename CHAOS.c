#include<stdio.h>

int numDigits(int n) {
    int d = 0;
    while(n) {
        n /= 10;
        d++;
    }
    return d;
}

int isPalindrome(int h, int m) {
    if (numDigits(h*100 + m) == 1) return 1;
    if (numDigits(h*100 + m) == 2) return m/10 == m%10;
    if (numDigits(h*100 + m) == 3) return h%10 == m%10;
    return h/10 == m%10 && h%10 == m/10;
}

void solve() {
    int h, m;
    scanf("%d:%d", &h, &m);
    int firstTry = 1;
    while(!isPalindrome(h, m) || firstTry) {
        firstTry = 0;
        m++;
        if (m == 60) {
            m = 0;
            h++;
            if (h == 24) h = 0;
        }
    }
    printf("%02d:%02d\n", h, m);
}

int main() {
    int n;
    scanf("%d", &n);
    while(n--) solve();
}