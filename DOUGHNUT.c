#include<stdio.h>

int main() {
	int t, a, b, c;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &a, &b, &c);
		printf("%s\n", (a*c <= b) ? "yes" : "no");
	}
}
