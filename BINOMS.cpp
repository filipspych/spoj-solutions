//SPOJ submission 25821244 (CPP14-CLANG) plaintext list. Status: AC, problem BINOMS, contest SPOJPL. By filipspychala (Filip), 2020-04-21 22:33:39.
#include <iostream>
using namespace std;
 
int nwd(int a, int b) {
	while (b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
 
void zad() {
	int n, k;
	cin >> n >> k;
	if (n == 0 || k == 0) {
		cout << 1 << endl;
		return;
	}
	if (n == k) {
		cout << 1 << endl;
		return;
	}
 
	int iloscWyrazow;
	if (n - k > k) {
		iloscWyrazow = k;
	}
	else {
		iloscWyrazow = n - k;
	}
 
	int* wyrazyM = new int[iloscWyrazow];
	for (int i = 0; i < iloscWyrazow; i++) {
		wyrazyM[i] = i + 1;
	}
 
	int* wyrazyL = new int[iloscWyrazow];
	for (int i = 0; i < iloscWyrazow; i++) {
		wyrazyL[i] = n - i;
	}
 
	for (int i = 0; i < iloscWyrazow; i++) {
		for (int j = 0; j < iloscWyrazow; j++) {
			int d = nwd(wyrazyL[i], wyrazyM[j]);
			wyrazyL[i] /= d;
			wyrazyM[j] /= d;
		}
	}
 
	int licznik = 1;
	for (int i = 0; i < iloscWyrazow; i++) {
		licznik *= wyrazyL[i];
	}
	
	cout << licznik << endl;
}
 
int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		zad();
	}
} 