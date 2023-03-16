// The first accepted version. Static allocation.

#include<string.h>
#include<stdio.h>
#include<ctype.h>

#define MAX_LEN 65637
#define CHECK if (lenc <= n) {\
	done(id, skip);\
	return 0;\
}

int eq(char a, char b) {
	return tolower(a) == tolower(b);
}

int issamogloska(char c) {
	return eq(c, 'A') || eq(c, 'E') 
	|| eq(c, 'I') || eq(c, 'O') || eq(c, 'U')
	|| eq(c, 'Y');
}

void done(char id[MAX_LEN], int skip[MAX_LEN]) {
	for (int i = 0; id[i] != '\0'; i++) if (!skip[i]) putchar(id[i]);
	putchar('\n');
}

int main() {
	int n, skip[MAX_LEN] = {0}, len, lenc;
	char id[MAX_LEN];
	
	scanf("%d %s", &n, id);
	lenc = len = strlen(id);
	
	
	CHECK
	for(int i = len-1; i >= 0; i--) {
		if (!isalnum(id[i]) && id[i] != '$') {
			lenc--;
			skip[i] = 1;
		}
		CHECK
	}
	for(int i = len-1; i >= 0; i--) {
		if (isdigit(id[i])) {
			lenc--;
			skip[i] = 1;
		}
		CHECK
	}
	int f = 0;
	for(int i = 0; i < len; i++) {
		if (issamogloska(id[i])) {
			if (f) {
				lenc--;
				skip[i] = 1;
			}
			f = 1;
		}
		CHECK
	}
	for(int i = len-2; i >= 0; i--) {
		lenc-=!skip[i];
		skip[i] = 1;
		CHECK
	}
	
}
