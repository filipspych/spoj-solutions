//SPOJ submission 25698088 (C++ 4.3.2) plaintext list. Status: AC, problem PRIME_T, contest SPOJPL. By filipspychala (Filip), 2020-04-05 00:50:46.
#include <iostream>
using namespace std;
 
int main() {
 
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x < 2) {
			cout << "NIE" << endl;
			continue;
		}
		bool isPrime = true;
		for (int j = 2; j < x; j++) {
			if (x % j == 0) {
				isPrime = false;
				break;
			}
		}
		cout << (isPrime ? "TAK" : "NIE") << endl;
	}
 
	return 0;
} 