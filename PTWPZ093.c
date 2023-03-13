#include<stdio.h>
#include<ctype.h>
#include<unistd.h>

#define d(msg) printf("\ndebug: %s\n", #msg);

int s = 0;

// RETURN the first non-space character
int skipSpace() {
	int c;
	while(isspace(c=getchar()));
	return c;
}

void writeIndent() {
	int scpy = s;
	while (scpy--) putchar(' ');
}

// RETURNS x1b iff '/' character was encountered
int processParams() {
	int c, sl = 0, q = 0, ind = 1;
	while ((c = skipSpace()) != '>')
		switch (c) {
			case '"': if (q) { putchar('\n'); ind = 1; } q = !q; continue;
			case '/': sl = 1; break;
			case '=': putchar(' '); putchar('='); putchar(' '); break;
			default: if (ind) writeIndent(); ind = 0; putchar(c);
		}
	return sl;
}

void processTag() {
	int c = getchar();
	
	if (c == '/') {
		while (isalnum(getchar()));
		s-=4;
	} else {
		writeIndent();
		do putchar(c); 
		while (isalnum(c=getchar()));
		putchar(':');
		putchar('\n');

		if (c == '/') {
			skipSpace();
		} else s += 4;

		if (c == ' ') {
			if(processParams()) s-=4;
		}
	}
}

void processTags() {
	while (skipSpace()!=EOF) 
		processTag();
}	

int main() {
	processTags();
}
