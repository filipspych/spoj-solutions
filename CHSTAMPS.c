#include<stdio.h>
#include<math.h>

int fivesCount(long long n) {
	int ret = 0;
	while(n) {
		ret += n % 10 == 5;
		n /= 10;
	}
	return ret;
}

int dig(int n, long long a) {
        return (a / ((long long)pow(10, n))) % 10;
}

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);

	a++;
	int m = 0;
	while(fivesCount(a) < b) { 
		a += pow(10, m); 
		if (dig(m, a) == 5) m++;
	}
	
	printf("%lld\n", a);
}
