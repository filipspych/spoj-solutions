#include<stdio.h>

void solve(double a, double b, double c) {
	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || c + b <= a) printf("0\n");
	else printf("1\n");
}

int main() {
	double a, b, c;
	while(EOF != scanf("%lf %lf %lf", &a, &b, &c)) solve(a, b, c);
}
