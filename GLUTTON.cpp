//SPOJ submission 25720993 (CPP) plaintext list. Status: AC, problem GLUTTON, contest SPOJPL. By filipspychala (Filip), 2020-04-08 04:36:16.
using namespace std;
#include <iostream>
#include <cmath>
int const CZAS = 24*60*60;
 
void zad() {
	int zap, w_pud, c, suma = 0;
	cin >> zap >> w_pud;
	for (int i = 0; i < zap; i++) {
		cin >> c;
		suma += CZAS / c;
	}
	int ret = ceil(suma / double(w_pud));
	cout << ret << endl;
}
 
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		zad();
	}
}
 