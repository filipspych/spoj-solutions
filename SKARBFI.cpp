//SPOJ submission 25739494 (CPP) plaintext list. Status: AC, problem SKARBFI, contest SPOJPL. By filipspychala (Filip), 2020-04-11 00:23:26.
#include <iostream>
using namespace std;
 
void test() {
	int N;
	cin >> N;
	int a, b;
	int p = 0, z = 0;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		switch (a) {
		case 0: p += b;
			break;
		case 1: p -= b;
			break;
		case 2: z += b;
			break;
		case 3: z -= b;
			break;
		}
	}
	if (p == 0 && z == 0) {
		cout << "studnia" << endl;
		return;
	}
	if (p > 0) {
			cout << 0 << " " << p << endl;
	}
	if (p < 0) {
		cout << 1 << " " << -p << endl;
	}
	if (z > 0) {
		cout << 2 << " " << z << endl;
	}
	if (z < 0) {
		cout << 3 << " " << -z << endl;
	}
	
	
}
 
int main()
{
	int D;
	cin >> D;
	for (int i = 0; i < D; i++) {
		test();
	}
}
 
 