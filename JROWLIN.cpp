//SPOJ submission 25888065 (CPP14-CLANG) plaintext list. Status: AC, problem JROWLIN, contest SPOJPL. By filipspychala (Filip), 2020-04-30 15:11:37.
#include <iostream>
#include <math.h>
using namespace std;
void zad() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == c) {
			cout << "NWR";
		}
		else {
			cout << "BR";
		}
	}
	else {
		double r = (c - b) / a;
		printf("%.2f", r);
	}
}
 
 
int main()
{
	zad();
}
 