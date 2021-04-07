//SPOJ submission 25888331 (CPP14-CLANG) plaintext list. Status: AC, problem JPESEL, contest SPOJPL. By filipspychala (Filip), 2020-04-30 15:52:03.
#include <iostream>
#include <math.h>
using namespace std;
 
int cyfra(unsigned long long l, int n ) {
	unsigned long long a = l / (unsigned long long) pow(10, n);
	return a % 10;
}
 
void zad() {
	unsigned long long p;
	cin >> p;
	int sum =
		cyfra(p, 10) * 1 +
		cyfra(p, 9) * 3 +
		cyfra(p, 8) * 7 +
		cyfra(p, 7) * 9 +
		cyfra(p, 6) * 1 +
		cyfra(p, 5) * 3 +
		cyfra(p, 4) * 7 +
		cyfra(p, 3) * 9 +
		cyfra(p, 2) * 1 +
		cyfra(p, 1) * 3 +
		cyfra(p, 0) * 1;
	if (sum > 0 && cyfra(sum, 0) == 0) {
		cout << "D";
	}
	else {
		cout << "N";
	}
 
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) {
		zad();
		cout << endl;
	}
}
 