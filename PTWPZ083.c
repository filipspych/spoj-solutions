#include<stdio.h>

int digittoint(char c) {
	return c - '0';
}

void solve() {
	int c = getchar(), s = digittoint(c);
	while ((c=getchar()) != '\n' && c != EOF) {
		s += (c == '-' ? -1 : 1) * digittoint(getchar());
	}

	printf("%d\n", s);
}

int main() {
	int a;
	scanf("%d\n", &a);
	while(a--) solve();
}
