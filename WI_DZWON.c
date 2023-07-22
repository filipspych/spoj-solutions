#include<stdio.h>

#define LEKCJA 45

void wypiszGodzine(int h, int m) {
	printf("%02d:%02d", h, m);
}

void zwiekszGodzine(int *h, int *m, int p) {
    int total = *h * 60 + *m + p;
    
    *h = total / 60 % 24;
    *m = total % 60;
}

int main() {
	int h, m, p;
	scanf("%d:%d", &h, &m);

	wypiszGodzine(h,m);
	zwiekszGodzine(&h,&m,LEKCJA);
	putchar(',');
	wypiszGodzine(h,m);

	while(EOF != scanf("%d", &p)) {
		putchar(',');
		zwiekszGodzine(&h, &m, p);
		wypiszGodzine(h, m);

		zwiekszGodzine(&h,&m,LEKCJA);
		putchar(',');
		wypiszGodzine(h,m);
	}
}
