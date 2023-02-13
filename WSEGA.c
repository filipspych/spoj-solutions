#include<stdio.h>

void solve() {
	int n, sum;
	scanf("%d", &n);
	sum = n;
	while(n--) {
		int x;
		scanf("%d", &x);
		sum += x;
	}
	printf("%d\n", sum - 1);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) solve();
}
