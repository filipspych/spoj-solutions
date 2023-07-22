#include<stdio.h>
#include<math.h>

double solve(long long x, long long y,long  long r, long long xx, long long yy, long long rr) {
	if (r>rr) {
		long long tmp = x;
		x = xx;
		xx = tmp;
		tmp = y;
		y = yy;
		yy = tmp;
		tmp = r;
		r = rr;
		rr = tmp;
	}
	double d = sqrt((xx-x)*(xx-x)+(yy-y)*(yy-y));

	if (r+rr <= d) return 0;
	if (rr >= d+r) return 2*r;
	return fmax(0, r+rr-d);
}

int main() {
	long long d, x, y, r, xx, yy, rr;
	scanf("%lld", &d);
	while(d--) {
		scanf("%lld %lld %lld %lld %lld %lld", &x, &y, &r, &xx, &yy, &rr);
		printf("%.2f\n", solve(x, y, r, xx, yy, rr));
	}
}
