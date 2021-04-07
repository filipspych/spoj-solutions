//SPOJ submission 25821546 (CPP14-CLANG) plaintext list. Status: AC, problem PP0601B, contest SPOJPL. By filipspychala (Filip), 2020-04-21 23:42:22.
#include <iostream>
using namespace std;
 
void zad() {
	int n, x, y;
	cin >> n >> x >> y;
	for (int i = x; i < n; i += x) {
		if (i % y != 0)cout << i << ' ';
	}
	cout << endl;
}
 
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		zad();
	}
}
 