//SPOJ submission 25871205 (CPP14) plaintext list. Status: AC, problem MWPZ06D, contest SPOJPL. By filipspychala (Filip), 2020-04-27 23:18:35.
#include <iostream>
using namespace std;
 
void zad() {
	int l, c;
	cin >> l >> c;
	if (l == 1) {
		cout << "TAK";
		return;
	}
 
	if (c % (l - 1) == 0) {
		cout << "NIE";
	}
	else {
		cout << "TAK";
	}
}
 
int main()
{
	int d;
	cin >> d;
	while (d--) {
		zad();
		if (d != 0) {
			cout << endl;
		}
	}
}
 
 