#include<stdio.h>

void solve(int a, int b) {
	int count = 0;
	while(b--) {
		int x;
		scanf("%d", &x);
		if (x == a) count++;
	}
	printf("%d\n", count);
}

int main() {
	int a, b;
	while(EOF != scanf("%d %d", &a, &b)) solve(a, b);
}

