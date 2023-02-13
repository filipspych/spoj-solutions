#include<stdio.h>
#include<math.h>

int getDigit(int idx, long n) {
	return (n % (long) pow(10, idx+1)) / (long) pow(10, idx);
}

void printThree(long n, int strIdx, char* postfix) {
	switch(getDigit(strIdx + 2, n)) {
		case 0: break;
		case 1: printf("sto "); break;
		case 2: printf("dwiescie "); break;
		case 3: printf("trzysta "); break;
		case 4: printf("czterysta "); break;
		case 5: printf("piecset "); break;
		case 6: printf("szescset "); break;
		case 7: printf("siedemset "); break;
		case 8: printf("osiemset "); break;
		case 9: printf("dziewiecset "); break;
	}
	if (getDigit(strIdx + 1, n) == 1) {
		switch(getDigit(strIdx + 0, n)) {
			case 0: printf("dziesiec "); break;
			case 1: printf("jedenascie "); break;
			case 2: printf("dwanascie "); break;
			case 3: printf("trzynascie "); break;
			case 4: printf("czternascie "); break;
			case 5: printf("pietnascie "); break;
			case 6: printf("szesnascie "); break;
			case 7: printf("siedemnascie "); break;
			case 8: printf("osiemnascie "); break;
			case 9: printf("dziewietnascie "); break;
		}
	} else {
		switch(getDigit(strIdx + 1, n)) {
			case 0: break;
			case 1: printf("BLAD! "); break;
			case 2: printf("dwadziescia "); break;
			case 3: printf("trzydziesci "); break;
			case 4: printf("czterdziesci "); break;
			case 5: printf("piecdziesiat "); break;
			case 6: printf("szescdziesiat "); break;
			case 7: printf("siedemdziesiat "); break;
			case 8: printf("osiemdziesiat "); break;
			case 9: printf("dziewiecdziesiat "); break;
		}
		switch(getDigit(strIdx, n)) {
			case 0: break;
			case 1: printf("jeden "); break;
			case 2: printf("dwa "); break;
			case 3: printf("trzy "); break;
			case 4: printf("cztery "); break;
			case 5: printf("piec "); break;
			case 6: printf("szesc "); break;
			case 7: printf("siedem "); break;
			case 8: printf("osiem "); break;
			case 9: printf("dziewiec "); break;
		}
	}
	if (getDigit(strIdx, n) || getDigit(strIdx + 1, n) || getDigit(strIdx + 2, n))
		printf("%s ", postfix);
	
}

void solve() {
	long n;
	scanf("%ld", &n);
	printThree(n, 12, "bln.");
	printThree(n, 9, "mld.");
	printThree(n, 6, "mln.");
	printThree(n, 3, "tys.");
	printThree(n, 0, "");
	printf("\n");
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) solve();
}

