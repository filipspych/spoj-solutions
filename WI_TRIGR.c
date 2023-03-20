#include<stdio.h>

int c[3];

int map(char c) {
	switch(c) {
		case '=': return '#';
		case '/': return '\\';
		case '\'': return '^';
		case '(': return '[';
		case ')': return ']';
		case '!': return '|';
		case '<': return '{';
		case '>': return '}';
		case '-': return '~';
		default: return -1;
	}
}

int gc() {
	c[0] = c[1];
	c[1] = c[2];
	c[2] = getchar();
	return c[2];
}

int main() {
	for(int i = 0; i < 3; i++)
		c[i] = getchar();
	if (c[2] == EOF) {
		for(int i = 2; i >= 0; i--)
			if (c[i] != EOF) 
				putchar(c[i]);
	}
	

	int q = 0;
	 do {
		if (c[0] == '?' && c[1] == '?') {
			if (map(c[2] != -1)) {
				putchar(map(c[2]));
			} else {
				putchar('?');
				putchar('?');
				putchar(c[2]);
			}
		} else if (c[0] == '?') {
			if (c[2] != '?') putchar(c[2]);
		} else if (c[1] == '?') {
			if (c[2] != '?') {
				putchar('?');
				putchar(c[2]);
			}
		} else {
			if (c[2] != '?') putchar(c[2]);
		} 
	} while(gc() != EOF);
	
	if (c[0] == '?') putchar('?');
	if (c[1] == '?') putchar('?');
}
