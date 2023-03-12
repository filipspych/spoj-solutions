#include<stdio.h>
#include<math.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int x1, x2, y1, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	long long ret = 0;
	for(int i = 1; i < 1000000; i+=2) {
		if (i < x1 || i < y1 || (i >= y2 && i >= x2)) continue;
		if (x1 <= i && i < x2 && y1 <= i && i < y2) ret += 2*i - x1 - y1 + 1;
		else if (x1 <= i && i < x2) ret += y2-y1;
		else ret += x2-x1;
	}

	printf("%lld\n", ret);
}
