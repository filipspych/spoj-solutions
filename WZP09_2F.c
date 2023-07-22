#include<stdio.h>
#include<ctype.h>

#define DIGITS 1001

int solve() {
	char str[DIGITS];
	scanf("%s", str);
	int sum = 0, i = -1;

	while(str[++i] != '\0') sum += str[i] - '0';
	if (sum == 0) return 0;
	if (sum % 3 == 0 && (str[i-1] == '0' || str[i-1] == '5')) return 1; 
	else return -1;
}


int main() {
	int s;
	while((s = solve())) if (s == 1) printf("TAK\n"); else printf("NIE\n");
}
