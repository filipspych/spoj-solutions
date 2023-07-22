#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_N 5000
#define MAX_CHARS 100

int compare(const void* a, const void* b) {
    char ca = *((char*) a);
    char cb = *((char*) b);
    return ca - cb;
}


int solve(int n) {
	char* multizbiory[MAX_N] = {0};
	int licznikMultizbiorow[MAX_N] = {0};
	int liczbaUnikalnych = 0;
	for(int i = 0; i < n; i++) {
		char* multizbior = (char*)calloc(MAX_CHARS, sizeof(char));;
		scanf("%s", multizbior);
		qsort(multizbior, strlen(multizbior)/sizeof(char), sizeof(char), compare);
	
		// zliczamy ten multizbior
		int znaleziono = 0;
		for(int j = 0; j < liczbaUnikalnych && !znaleziono; j++) if (strcmp(multizbior, multizbiory[j]) == 0) {
			free(multizbior);
			licznikMultizbiorow[j]++;
			znaleziono = 1;
		}
		if (!znaleziono) {
			multizbiory[liczbaUnikalnych] = multizbior;
			licznikMultizbiorow[liczbaUnikalnych]++;
			liczbaUnikalnych++;
		}
	}		

	for(int i = 0; i < liczbaUnikalnych; i++) free(multizbiory[i]);
	
	// maksimum
	int max = 0;
	while(n--) if (licznikMultizbiorow[n]>max) max = licznikMultizbiorow[n];
	return max;
}

int main() {
	int Z, n;
	scanf("%d", &Z);
	while(Z--) {
		scanf("%d", &n);
		printf("%d\n", solve(n));
	}
}
