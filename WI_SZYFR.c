#include<stdio.h>
#include<ctype.h>

#define MAX_KEYLEN 10

typedef char smallint;

int rot(smallint n, int c) {
        return (c - 'A' + n) % ('Z' - 'A' + 1) + 'A';
}

void solve(int decypher, smallint* key, smallint keylen) {
        int c, i = 0;
        while(isalpha(c = getchar())) {
		int k = key[(i++)%keylen];
		putchar(rot(decypher?'Z'-'A'-k+1:k, c));
	}
}

int main() {
        char c = getchar();
        while(isalpha(getchar()));
        int decypher = c == 'D';

        smallint keylen = 0, key[MAX_KEYLEN];
        while(isdigit(c=getchar())) key[keylen++] = c - '0';

        solve(decypher, key, keylen);
}
