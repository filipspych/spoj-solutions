#include<stdio.h>
#include<stdlib.h>

#define DAILY_DISTANCE 800

typedef struct H {
	int d;
	int c;
} H;

void debug(H* hs, int h) {
	printf("\nDEBUG: ");
	for(int i = 0; i < h; i++) printf("%d %d |", hs[i].d, hs[i].c);
}

int findMin(H* hs, int sIdx, int h) {
	int min = hs[sIdx+1].c;
	for(int i = sIdx+1; i < h && hs[i].d - hs[sIdx].d <= DAILY_DISTANCE; i++) 
		if (hs[i].c < min) min = hs[i].c;
	return min;
}

void solve(H* hs, int d, int h) {
	hs[h-1].c = 0;
	hs[h-1].d = d;
	hs[0].c = 0;
	hs[0].d = 0;
	
	for(int i = h-2; i >= 0; i--) {
		//debug(hs, h);
		hs[i].c += findMin(hs, i, h);
	}
	
	printf("%d\n", hs[0].c);
}

int main() {
	int d, h;
	scanf("%d %d", &d, &h);
	h += 2;
	H* hs = malloc(sizeof(H)*h);
	for(int i = 1; i < h-1; i++) 
		scanf("%d %d", &hs[i].d, &hs[i].c);

	solve(hs, d, h);
	
	free(hs);
}
