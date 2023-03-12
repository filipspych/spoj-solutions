#include<stdio.h>
#include<strings.h>
#include<ctype.h>

int rot(int n, int c, int first, int last) {
	return ((c-first + n) % (last - first + 1)) + first;
}

int main() {
	int c;
	while((c=getchar())!=EOF) putchar(isdigit(c) ? rot(5, c, '0', '9') : (isalpha(c) ? (isupper(c) ? rot(13, c, 'A', 'Z') : rot(13, c, 'a', 'z')) : c));
}
