#include<stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void solve(int a, int b, int c) {
	if (a > c)
   		swap(&a, &c);
	if (a > b)
   		swap(&a, &b);
	if (b > c)
   		swap(&b, &c);

	// warunki trojkata
	if (a <= 0) printf("brak");
	else if (a + b <= c) printf("brak");
	else if (a*a + b*b == c*c) printf("prostokatny");
	else if (a*a + b*b < c*c) printf("rozwartokatny");
	else printf("ostrokatny");
	
	printf("\n");
}

int main() {
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c) != EOF) solve(a,b,c);
}
