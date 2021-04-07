//SPOJ submission 25888021 (CPP14-CLANG) plaintext list. Status: AC, problem JWSPLIN, contest SPOJPL. By filipspychala (Filip), 2020-04-30 15:03:30.
#include <iostream>
using namespace std;
 
void zad() {
	int a, b, c, d, x, y;
	cin >> a >> b >> c >> d >> x >> y;
	if ((y - b) * (c - a) - (d - b) * (x - a) == 0) {
		cout << "TAK";
	}
	else {
		cout << "NIE";
	}
 
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) {
		zad();
		if (t != 0)cout << endl;
	}
}
 
 