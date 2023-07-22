#include<stdio.h>

int main() {
	int a, b, r2, x, y, n;
	scanf("%d %d %d %d", &a, &b, &r2, &n);
	r2 *= r2;
	while(n--) {
		scanf("%d %d", &x, &y);
		int A = (a-x)*(a-x) + (b-y)*(b-y);
		printf(A < r2 ? "I" : A == r2 ? "E" : "O");
		putchar('\n');
	}
}
