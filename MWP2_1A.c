#include<stdio.h>

#define MAX_K 100

void solve() {
	int k, a[MAX_K], p[MAX_K] = {0};
	scanf("%d ", &k);
	for(int i = 0; i < k; i++) {
		scanf("%d", &a[i]);
		int pr = i+1 - a[i];
		if (pr < 0) pr += k;
		p[pr]++; // zliczanie przesuniec
	}
	
	// ktorego przesuniecia jest najwiecej?
	int max = -1, maxIdx;
	for(int i = 0; i < k; i++) {
		if (p[i] > max) {
			max = p[i];
			maxIdx = i;
		}
	}

	// wypiszmy przesunieta
	for(int i = 0; i < k; i++) 
		printf("%d ", a[(i+maxIdx)%k]);
	putchar('\n');
}
	

int main() {
	int d;
	scanf("%d", &d);
	while(d--) solve();
}
