#include<stdio.h>

void solve() {
	int c;
	while((c=getchar()) != '\n') 
		putchar('2' + (c - 'A' - (c >= 'S') - (c == 'Z'))/3);
	putchar('\n');
}	

int main() {
	int a;
	scanf("%d\n", &a);
	while(a--) solve();
}
